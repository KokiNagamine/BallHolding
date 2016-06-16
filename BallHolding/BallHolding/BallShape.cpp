#include "stdafx.h"
#include "BallShape.h"
#include <cmath>

#define pi 3.14159265358979	//‰~Žü—¦

BallShape::BallShape(double x, double y, double r, gl_color c)
{
	updatePosition(x, y);
	radius = r;
	updateColor(c);
}

void BallShape::drawn()
{
	glBegin(GL_POLYGON);
	glColor3f(color[0], color[1], color[2]);
	double x, y;
	for (int i = 0; i < 360; i++){
		x = radius * sin(i / pi) + xCoordinate;
		y = radius * cos(i / pi) + yCoordinate;
		glVertex2d(x, y);
	}
	glEnd();
}