#include "stdafx.h"
#include "BarShape.h"

BarShape::BarShape(double y, double s, gl_color c)
{
	updatePosition(0.0, y);
	size = s;
	updateColor(c);
}

void BarShape::drawn()
{
	glBegin(GL_POLYGON);
	glColor3f(color[0], color[1], color[2]);
	glVertex2d(-100.0, size / 2 + yCoordinate);
	glVertex2d(100.0, size / 2 + yCoordinate);
	glVertex2d(100.0, -(size / 2) + yCoordinate);
	glVertex2d(-100.0, -(size / 2) + yCoordinate);
	glEnd();
}
