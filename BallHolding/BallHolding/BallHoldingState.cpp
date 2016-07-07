#include "stdafx.h"
#include "BallHoldingState.h"

#include <sstream>

using namespace std;

BallHoldingState::BallHoldingState()
{
}

void BallHoldingState::setParam(std::ifstream& ifs)
{
	string str;

	getline(ifs, str);
	trialNum = atoi(str.c_str());
	params.resize(trialNum);
	cout << "TrialNum : " << trialNum << endl;

	getline(ifs, str);
	mp["BallRadius"] = atof(str.c_str());
	cout << "BallRadius : " << mp["BallRadius"] << " [cm]" << endl;

	getline(ifs, str);
	mp["BallWeight"] = atof(str.c_str());
	cout << "BallWeight : " << mp["BallWeight"] << " [g]" << endl;

	int i = 0;
	while (trialNum > i)
	{
		params[i].resize(4);

		getline(ifs, str, ' ');	//trialOrder

		getline(ifs, str, ' ');	//onForceTimingFrag
		mp["onForceTimingFrag"] = 0;
		params[i][static_cast<int>(mp["onForceTimingFrag"])] = atoi(str.c_str());

		getline(ifs, str, ' ');	//EMGFrag
		mp["EMGFrag"] = 1;
		params[i][static_cast<int>(mp["EMGFrag"])] = atoi(str.c_str());

		getline(ifs, str, ' ');	//ResultFrag
		mp["ResultFrag"] = 2;
		params[i][static_cast<int>(mp["ResultFrag"])] = atoi(str.c_str());

		getline(ifs, str);		//ScreenFrag
		mp["ScreenFrag"] = 3;
		params[i][static_cast<int>(mp["ScreenFrag"])] = atoi(str.c_str());

		cout << "TrialOrder : " << i << ", onFTFrag : " << params[i][0] << ", EMGFrag : " << params[i][1] << ", ResultFrag : " << params[i][2] << ", ScreenFrag : " << params[i][3] << endl;
		i++;
	}
}

//引数はTrialNumとsetParamでmpに受け付けた値, TrialNum, BallRadius, BallWeight
double BallHoldingState::loadParam(std::string param)
{
	double value = 0.0;

	if (param == "TrialNum") {
		value = trialNum;
	}
	else {
		value = mp[param];
	}

	return value;
}

//onForceTimingFrag, EMGFrag, ResultFrag, ScreenFrag
double BallHoldingState::loadParam(int trial, std::string param)	//trialは1オリジン
{
	double value = 0.0;

	value = params[trial - 1][static_cast<int>(mp[param])];

	return value;
}
