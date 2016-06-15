#include "stdafx.h"

//色宣言{red, green, blue, alpha}
gl_color backGroundColor = {
	1.0f, 0.0f, 1.0f, 1.0f
};

gl_color barColor = {
	1.0f, 1.0f, 1.0f, 1.0f
};

gl_color cursorColor = {
	1.0f, 1.0f, 1.0f, 1.0f
};

gl_color ballColor = {
	1.0f, 1.0f, 1.0f, 1.0
};

//スクリーンと実尺の比率、ピクセルを実寸で割った値
/*MITSUBISHI製液晶ディスプレイ：RDT233WLM
//http://www.mitsubishielectric.co.jp/home/display/product/standard/rdt233wlm/spec.html
*/
double screenScaleWidth = 1920 / 509.6;
double screenScaleHeight = 1080 / 286.4;