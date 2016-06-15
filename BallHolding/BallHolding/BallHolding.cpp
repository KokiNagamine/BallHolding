// BallHolding.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
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
	//������
	glutInit(&argc, argv);
	//�E�B���h�E����
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(1120 ,630);
	glutCreateWindow(argv[0]);
	//�`�惋�[�`��
	glutDisplayFunc(diplay);
	glutReshapeFunc(resize);
	//���o�̓��[�`��
	initGL();
	//���[�v
	glutMainLoop();
    return 0;
}

