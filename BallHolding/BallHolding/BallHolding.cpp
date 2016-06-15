// BallHolding.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <GL/glut.h>

unsigned int window_width, window_height;

void diplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

void resize(int width, int height) {
	printf("Size %d x %d\n", width, height);
	window_width = width;
	window_height = height;
}

void initGL(void) 
{
	glClearColor(backGroundColor.red, backGroundColor.green, backGroundColor.blue, backGroundColor.alpha);
}

int main(int argc, char *argv[])
{
	//初期化
	glutInit(&argc, argv);
	//ウィンドウ生成
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1120 ,630);
	glutCreateWindow(argv[0]);
	//描画ルーチン
	glutDisplayFunc(diplay);
	glutReshapeFunc(resize);
	//入出力ルーチン
	initGL();
	//ループ
	glutMainLoop();
    return 0;
}

