#pragma once

#include "stdafx.h"

class ExpState
{
public:
	virtual void setParam(std::ifstream& ifs) = 0;
	virtual double loadParam(std::string param) = 0;
	virtual double loadParam(int trial, std::string param) = 0;
protected:
	int trialNum;
};


//NullStateƒNƒ‰ƒXŽÀ‘•
class NullState : public ExpState
{
public:
	NullState() {};
	void setParam(std::ifstream& ifs) {
		std::cout << "ExpState is NullState." << std::endl;
	};
	double loadParam(std::string param) {
		std::cout << "ExpState isn NullState." << std::endl;
		return 0.0;
	}
	double loadParam(int trial, std::string param) {
		std::cout << "ExpState isn NullState." << std::endl;
		return 0.0;
	};
};