#include "stdafx.h"
#include "ExpWorld.h"


ExpWorld::ExpWorld(ExpParam expData)
{
	double TN = expData.loadParam("TrialNum");
	printf("%l\n", TN);
}

ExpWorld::~ExpWorld()
{
}
