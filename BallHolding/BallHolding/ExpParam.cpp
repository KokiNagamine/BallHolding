#include "stdafx.h"
#include "ExpParam.h"
#include "BallHoldingState.h"

#include <unordered_map>

using namespace std;


//fpを受け取って内容を実験パラメーターとして保存
ExpParam::ExpParam()
{
	//カレントディレクトリ以下に配置
	ExpParam("Parameter\\ExpParam.txt");
}

ExpParam::ExpParam(char *s)
{
	ifs.open(s);
	if (!ifs) {
		cout << "fail file load!" << endl;
	}
	else
	{
		string theme;
		getline(ifs, theme);
		state = new NullState();
		setState(theme);
		state->setParam(ifs);
	}
}

void ExpParam::setState(string theme)
{
	unordered_map<string, int> mp;
	mp["BallHolding"] = 1;
	mp["BallCatching"] = 2;


	delete state;
	switch (mp[theme])
	{
	case 1:
		printf("BallHolding Exp Set\n");
		state = new BallHoldingState();
		break;
	case 2:
		printf("BallCatching Exp Set\n");
		break;
	default:
		printf("Exp Loading is failed\n");
		state = new NullState();
		break;
	}
}
