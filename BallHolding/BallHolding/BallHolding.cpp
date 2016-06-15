// BallHolding.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <GL/glut.h>

#define WIDTH 1024
#define HEIGHT 768

bool full_screen_flag = false;

void diplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
		glColor4f(barColor.red, barColor.green, barColor.blue, barColor.alpha);
		glVertex2f(0.0, 0.0);
		glVertex2f(25.46, -0.75);
		glVertex2f(25.46, 0.75);
	glEnd();

	glutSwapBuffers();
}

void resize(int width, int height) {
	printf("Size %d x %d\n", width, height);

	glViewport(0, 0, width, height);

	glLoadIdentity();

	glOrtho(-width / (20 * screenScaleWidth), width / (20 * screenScaleWidth), -height / (20 * screenScaleHeight), height / (20 * screenScaleHeight), -1.0, 1.0);
}

void initGL(void) 
{
	glClearColor(backGroundColor.red, backGroundColor.green, backGroundColor.blue, backGroundColor.alpha);
}

//WinowsAPIを用いたフルスクリーン切り替え関数
void fullScreen() {
	int nMode = 0;
	DEVMODE devMode;
	HWND hWnd;

	hWnd = GetActiveWindow();

	if (full_screen_flag) {
		glClearColor(backGroundColor.red, backGroundColor.green, backGroundColor.blue, backGroundColor.alpha);
		while (EnumDisplaySettings(NULL, nMode++, &devMode))
		{
			if (devMode.dmPelsWidth != WIDTH || devMode.dmPelsHeight != HEIGHT) continue;
			if (devMode.dmBitsPerPel = 32) continue;
			if (ChangeDisplaySettings(&devMode, CDS_TEST) == DISP_CHANGE_SUCCESSFUL) break;
		}
		ChangeDisplaySettings(&devMode, CDS_TEST);
		glutFullScreen();
	} else {
		glClearColor(backGroundColor.red, backGroundColor.green, backGroundColor.blue, backGroundColor.alpha);
		ChangeDisplaySettings(NULL, 0);
		glutPositionWindow(100, 100);
		glutReshapeWindow(1120, 630);
	}
}

void keybd(unsigned char key, int x, int y) {
	switch (key)
	{
	case 'f' :	//full_screen_flagの値を反転
		full_screen_flag = !full_screen_flag;
		printf("スクリーンモードを変更します。\n");
		fullScreen();
		break;
	default:
		printf("未定義の入力です。\n f:スクリーンモード変更\n");
		break;
	}
}

int main(int argc, char *argv[])
{
	//初期化
	glutInit(&argc, argv);
	//ウィンドウ生成
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1120 ,630);
	glutCreateWindow("BallHoldingProgram");
	//描画ルーチン
	glutDisplayFunc(diplay);
	glutReshapeFunc(resize);
	//入出力ルーチン
	initGL();
	glutKeyboardFunc(keybd);
	//ループ
	glutMainLoop();
    return 0;
}

