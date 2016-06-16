#include "stdafx.h"
#include "CursorShape.h"

CursorShape::CursorShape(double x, double y, double h, double w, gl_color c)
{
	updatePosition(x, y);
	height = h;
	width = w;
	updateColor(c);
}

void CursorShape::drawn()
{
	glBegin(GL_POLYGON);
	glColor3f(color[0], color[1], color[2]);
	glVertex2d(width / 2 + xCoordinate, height / 2 + yCoordinate);
	glVertex2d(width / 2 + xCoordinate, -height / 2 + yCoordinate);
	glVertex2d(-width / 2 + xCoordinate, -height / 2 + yCoordinate);
	glVertex2d(-width / 2 + xCoordinate, height / 2 + yCoordinate);
	glEnd();
}
