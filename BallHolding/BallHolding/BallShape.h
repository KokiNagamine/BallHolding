#pragma once
#include "stdafx.h"
#include "Shape.h"

class BallShape : public Shape
{
public:
	BallShape(double x, double y, double r, gl_color c);
	void drawn();

private:
	double radius;
};