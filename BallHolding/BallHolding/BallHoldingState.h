#pragma once

#include "stdafx.h"
#include "ExpState.h"
#include <vector>
#include <fstream>
#include <unordered_map>


class BallHoldingState : public ExpState
{
public:
	BallHoldingState();
	void setParam(std::ifstream& ifs);
	double loadParam(std::string param);
	double loadParam(int trial, std::string param);
private:
	std::unordered_map<std::string, double> mp;
	std::vector<std::vector<double>> params;
};