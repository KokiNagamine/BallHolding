#pragma once

namespace ball_task{
	typedef struct {
		float red;
		float green;
		float blue;
		float alpha;
	}gl_color;
}

using namespace ball_task;

extern gl_color glBlue;
extern gl_color glRed;
extern gl_color glGreen;
extern gl_color glYellow;
extern gl_color glOrange;
extern gl_color glPurple;
extern gl_color glGray;
extern gl_color glBrown;
extern gl_color glAzure;
extern gl_color glBlack;
extern gl_color glWhite;

extern double screenScaleHeight;
extern double screenScaleWidth;