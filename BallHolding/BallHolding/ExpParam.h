#pragma once

#include "stdafx.h"
#include "ExpState.h"

#include <fstream>


class ExpParam
{
public:
	ExpParam();
	ExpParam(char *s);

	double loadParam(std::string param);
	double loadParam(int trial, std::string param);

private:
	std::ifstream ifs;
	ExpState *state;

	void setState(std::string theme);
};