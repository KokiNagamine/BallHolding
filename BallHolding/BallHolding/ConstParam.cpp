#include "stdafx.h"

//�F�錾{red, green, blue, alpha}
gl_color backGroundColor = {
	0.0f, 0.5f, 0.0f, 1.0f
};

gl_color barColor = {
	0.0f, 0.5f, 1.0f, 1.0f
};

gl_color cursorColor = {
	0.0f, 0.0f, 0.0f, 1.0f
};

gl_color ballColor = {
	0.7f, 0.0f, 0.0f, 1.0f
};

//�X�N���[���Ǝ��ڂ̔䗦�A�s�N�Z���������Ŋ������l
/*MITSUBISHI���t���f�B�X�v���C�FRDT233WLM
//http://www.mitsubishielectric.co.jp/home/display/product/standard/rdt233wlm/spec.html
*/
double screenScaleWidth = 1920 / 509.6;
double screenScaleHeight = 1080 / 286.4;