#pragma once

#include "stdafx.h"
#include "ExpState.h"

#include <fstream>


class ExpParam
{
public:
	ExpParam();
	ExpParam(char *s);

private:
	std::ifstream ifs;
	ExpState *state;

	void setState(std::string theme);
};