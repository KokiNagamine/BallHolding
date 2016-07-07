#include "stdafx.h"

//色宣言{red, green, blue, alpha}

gl_color glBlue = {
	0.2f, 0.0f, 1.0f, 1.0f
};

gl_color glRed = {
	0.8f, 0.0f, 0.0f, 1.0f
};

gl_color glGreen = {
	0.0f, 0.4f, 0.0f, 1.0f
};

gl_color glYellow = {
	1.0f, 1.0f, 0.0f, 1.0f
};

gl_color glOrange = {
	1.0f, 0.2f, 0.0f, 1.0f
};

gl_color glPurple = {
	0.6f, 0.0f, 1.0f, 1.0f
};

gl_color glGray = {
	0.6f, 0.6f, 0.6f, 1.0f
};

gl_color glBrown = {
	0.4f, 0.2f, 0.0f, 1.0f
};

gl_color glAzure = {
	0.2f, 0.8f, 1.0f, 1.0f
};

gl_color glBlack = {
	0.0f, 0.0f, 0.0f, 1.0f
};

gl_color glWhite = {
	1.0f, 1.0f, 1.0f, 1.0f
};

//スクリーンと実尺の比率、ピクセルを実寸で割った値
/*MITSUBISHI製液晶ディスプレイ：RDT233WLM
//http://www.mitsubishielectric.co.jp/home/display/product/standard/rdt233wlm/spec.html
*/
double screenScaleWidth = 1920 / 509.6;
double screenScaleHeight = 1080 / 286.4;