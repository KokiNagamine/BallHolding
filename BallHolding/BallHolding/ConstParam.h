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

extern gl_color backGroundColor;
extern gl_color barColor;
extern gl_color cursorColor;
extern gl_color ballColor;