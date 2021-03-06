#include "glut.h"

float fTranslate = 0.0f;
float fRotate;
float fScale = 1.0f;								// set inital scale value to 1.0f

int flag1 = 1;
int flag2 = 1;

static const GLint index_list[][4] = {
	0, 2, 3, 1,
	0, 4, 6, 2,
	0, 1, 5, 4,
	4, 5, 7, 6,
	1, 3, 7, 5,
	2, 6, 7, 3,
};

void Draw()
{
	glBegin(GL_QUADS);
	for (int i = 0; i < 6; ++i)         // 有六个面，循环六次
	   for (int j = 0; j < 4; ++j)     // 每个面有四个顶点，循环四次
	       glVertex3fv(vertex_list[index_list[i][j]]);
	glEnd();
}


/*
//画三维图形 
void Draw()
{
	glutWireCube(1.0);
}*/

void reshape(int width, int height)
{
	if (height == 0)										// Prevent A Divide By Zero By
	{
		height = 1;										// Making Height Equal One
	}

	glViewport(0, 0, width, height);						// Reset The Current Viewport

	glMatrixMode(GL_PROJECTION);						// Select The Projection Matrix
	glLoadIdentity();									// Reset The Projection Matrix

	// Calculate The Aspect Ratio Of The Window
	// Perspective view
	gluPerspective(45.0f, (GLfloat)width / (GLfloat)height, 0.1f, 100.0f);
	// Ortho view
	//glOrtho(-4, 4, -4, 4, 0, 100);

	glMatrixMode(GL_MODELVIEW);							// Select The Modelview Matrix
	glLoadIdentity();									// Reset The Modelview Matrix
}

void drawseven()
{
	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-3.0f, 1.0f, -6.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 0.0f, -6.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 1.0f, -6.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, -1.0f, -6.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系
}

void drawfour()
{
	glScalef(0.4f, 0.4f, 0.4f); // 设置三个轴分别的缩放比例
	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 1.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 2.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(0.0f, 2.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(0.0f, 1.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(1.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(0.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-1.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(0.0f, -1.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系
}

void draweight()
{
	glScalef(0.2f, 0.2f, 0.2f); // 设置三个轴分别的缩放比例

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(0.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-1.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(1.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(2.0f, 0.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 1.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(2.0f, 1.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 2.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(2.0f, 2.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, -1.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(2.0f, -1.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, -2.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(2.0f, -2.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, -3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(2.0f, -3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(2.0f, 3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-1.0f, 3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(1.0f, 3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(0.0f, 3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-1.0f, -3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(1.0f, -3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系

	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(0.0f, -3.0f, 0.0f);			// 向左平移
	Draw();
	glPopMatrix(); // 回到前一个坐标系	
}

void idle()
{
	glutPostRedisplay();
}

void redraw()
{
	// 如果想使用线框模式
	//	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();									// 重置变换矩阵（回到世界坐标系）

	//左边
	//7
	glPushMatrix(); // 设置一个新的坐标系
	glTranslatef(-2.0f, 0.0f, -6.0f);			// 向左平移
	//where you need to write 沿着y轴上下运动
	glTranslatef(0.0f, fTranslate, -0.0f);
	
	if (fTranslate > 1.5f) {
		fTranslate -= 0.005f;
		flag1 = 0;
	}
	else if (fTranslate < -1.5f) {
		fTranslate += 0.005f;
		flag1 = 1;
	}
	else if (flag1 == 1) {
		fTranslate += 0.005f;
	}
	else if (flag1 == 0) {
		fTranslate -= 0.005f ;
	}
	
	drawseven();
	glPopMatrix(); // 回到前一个坐标系

	//中间
	glPushMatrix();
	//glRotatef(19.198f, 0.0f, 1.0f, 0.0f); // 绕轴（0, 1, 0)旋转19.198°（角度制）
	glTranslatef(0.0f, 0.0f, -6.0f);
	//where you need to write 以y轴为旋转轴
	glRotatef(fRotate, 0.0f, 1.0f, -0.0f);
	fRotate = fRotate + 0.07f;

	//cout << fRotate << endl;
	//Draw();
	drawfour();
	glPopMatrix();

	//右边
	glPushMatrix();
	glTranslatef(2.0f, 0.0f, -6.0f);
	//where you need to write 等比例缩放
	glScalef(fScale, fScale,1.0f);
	if (fScale > 1.3f) {
		fScale -= 0.001f;
		flag2 = 0;
	}
	else if (fScale < 0.7f) {
		fScale += 0.001f;
		flag2 = 1;
	}
	else if(flag2==1){
		fScale += 0.001f;
	}
	else {
		fScale -= 0.001f;
	}
	
	draweight();
	//Draw();
	glPopMatrix();

	glutSwapBuffers();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutInitWindowSize(640, 480);
	int windowHandle
		= glutCreateWindow("Simple GLUT App");

	glutDisplayFunc(redraw);
	glutReshapeFunc(reshape);
	glutIdleFunc(idle);

	glutMainLoop();

	return 0;
}