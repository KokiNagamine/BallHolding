#pragma once

#include "stdafx.h"
#include <GL/glut.h>


//’ŠÛƒNƒ‰ƒX
//OpenGL‚ğ—p‚¢‚Ä•`‰æ
//

class Shape
{
public:
	Shape();
	virtual void drawn() = 0;
	void updatePosition(double x, double y);
	void updateColor(gl_color c);

protected:
	double xCoordinate;
	double yCoordinate;
	float color[4];
};