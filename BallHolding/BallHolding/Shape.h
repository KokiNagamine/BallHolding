#pragma once

#include "stdafx.h"
#include <GL/glut.h>


//���ۃN���X
//OpenGL��p���ĕ`��
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