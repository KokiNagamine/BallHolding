#pragma once
#include "stdafx.h"
#include "Shape.h"

class BarShape : public Shape
{
public:
	BarShape(double y, double s, gl_color c);
	void drawn();

private:
	double size;
};