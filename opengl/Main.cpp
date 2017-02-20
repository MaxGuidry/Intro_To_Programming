#include <GL\glew.h>
#include <GL\freeglut.h>
#include<math.h>
#include <iostream>
#include<Windows.h>
/**
* glVertex2f(float x, float y).
* The point (0.0, 0.0) represents the middle of the window (not the top left corner).
* The "2f" suffix means 2 values of float type (x and y).
*/

void Poly3dTest()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex3f(0, 0, 0);
	glVertex3f(.5, 0, 0);
	glVertex3f(0, .5, .5);
	glVertex3f(0, 0, 0);
	glVertex3f(-.2, 0, 0);
	glVertex3f(-.2, .2, .2);
	glVertex3f(0, 0, 0);

	glEnd();
	glFlush();


}
void CircleFunction(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
	float test = 0;
	for (float i = -sqrt(.75); i <= sqrt(.75); i+=.01)
	{
	
		float x = sqrt(-((float)i*(float)i) + (float).75);
		std::cout << x << " , " << i<<"\n";
		glVertex2f(i, x);
		test = x;
	}

	for (float i = sqrt(.75); i >= -sqrt(.75); i -= .01)
	{
		float y = -sqrt(-((float)i*(float)i) + (float).75);
	
		glVertex2f(i, y);
	}
	
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(1000, 1000);                    // window size
    glutInitWindowPosition(0, 0);                // distance from the top-left screen
    glutCreateWindow("BadproG - Hello world :D");    // message displayed on top bar window
    glutDisplayFunc(Poly3dTest);
    glutMainLoop();
    return 0;
}