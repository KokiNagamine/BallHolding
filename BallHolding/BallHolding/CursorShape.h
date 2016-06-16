#pragma once
#include "stdafx.h"
#include "Shape.h"

class CursorShape : public Shape
{
public:
	CursorShape(double x, double y, double size_h, double size_w, gl_color c);
	void drawn();

private:
	double height;
	double width;
};