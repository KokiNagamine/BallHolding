#include "stdafx.h"
#include "Shape.h"


Shape::Shape()
{
}


void Shape::updatePosition(double x, double y)
{
	height = x;
	width = y;
}

void Shape::updateColor(gl_color c)
{
	color[0] = c.red;
	color[1] = c.green;
	color[2] = c.blue;
	color[3] = c.alpha;
}