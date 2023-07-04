#include<GL/freeglut.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include<math.h>


float x_position= 85;

int state= 1;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	
	glTranslatef(0,0,-10);
	glRotatef(x_position,1,1,1);
	
	glColor3f(0,0,0);
	
	glBegin(GL_QUADS);
	//TableHead
	//Front
	glColor3f(0.45,0.2745,0);
	glVertex3f(-1,-1,1);
	glVertex3f(4,-1,1);
	glVertex3f(4,-0.8,1);
	glVertex3f(-1,-0.8,1);
	
	//Back
	glColor3f(0.45,0.2745,0);
	glVertex3f(-1,-0.8,-1.5);
	glVertex3f(4,-0.8,-1.5);
	glVertex3f(4,-1,-1.5);
	glVertex3f(-1,-1,-1.5);
	
	//left
	glColor3f(0.35,0.2745,0);
	glVertex3f(-1,-0.8,-1.5);
	glVertex3f(-1,-1,-1.5);
	glVertex3f(-1,-1,1);
	glVertex3f(-1,-0.8,1);
	
	//Right
	glColor3f(0.35,0.2745,0);
	glVertex3f(4,-0.8,1);
	glVertex3f(4,-1,1);
	glVertex3f(4,-1,-1.5);
	glVertex3f(4,-0.8,-1.5);
	
	//Top
	glColor3f(0.588,0.2745,0);
	glVertex3f(-1,-0.8,-1.5);
	glVertex3f(-1,-0.8,1);
	glVertex3f(4,-0.8,1);
	glVertex3f(4,-0.8,-1.5);
	
	//Bottom
	glColor3f(0.588,0.2745,0);
	glVertex3f(-1,-1,1);
	glVertex3f(-1,-1,-1.5);
	glVertex3f(4,-1,-1.5);
	glVertex3f(4,-1,1);
	glEnd();
	glBegin(GL_QUADS);
	
	//LEFTBOTTOM LEG
	//front
	glColor3f(0.588,0.2745,0);
	glVertex3f(-1,-1,1);
	glVertex3f(-1,-4,1);
	glVertex3f(-0.6,-4,1);
	glVertex3f(-0.6,-4,0.6);
	
	//back
	glColor3f(0.588,0.2745,0);
	glVertex3f(-1,-1,0.6);
	glVertex3f(-0.6,-1,0.6);
	glVertex3f(-0.6,-4,0.6);
	glVertex3f(-1,-4,0.6);
	
	//left
	glColor3f(0.49,0.176,0);
	glVertex3f(-1,-1,0.6);
	glVertex3f(-1,-4,0.6);
	glVertex3f(-1,-4,1);
	glVertex3f(-1,-1,1);
	
	//right
	glColor3f(0.49,0.176,0);
	glVertex3f(-0.6,-1,1);
	glVertex3f(-0.6,-4,1);
	glVertex3f(-0.6,-4,0.6);
	glVertex3f(-0.6,-1,0.6);
	
	//top
	glColor3f(0.35,0.2745,0);
	glVertex3f(-1,-1,0.6);
	glVertex3f(-1,-1,1);
	glVertex3f(-0.6,-1,1);
	glVertex3f(-0.6,-1,0.6);
	
	
	//bottom
	glColor3f(0.35,0.2745,0);
	glVertex3f(-1,-4,1);
	glVertex3f(-0.6,-4,1);
	glVertex3f(-0.6,-4,0.6);
	glVertex3f(-1,-4,0.6);
	glEnd();
	
	
	glBegin(GL_QUADS);
	
	//TOPLEFT LEG
	//front
	glColor3f(0.588,0.2745,0);
	glVertex3f(-1,-1,-1.1);
	glVertex3f(-1,-4,-1.1);
	glVertex3f(-0.6,-4,-1.1);
	glVertex3f(-0.6,-4,-1.5);
	
	//back
	glColor3f(0.588,0.2745,0);
	glVertex3f(-1,-1,-1.5);
	glVertex3f(-0.6,-1,-1.5);
	glVertex3f(-0.6,-4,-1.5);
	glVertex3f(-1,-4,-1.5);
	
	//left
	glColor3f(0.49,0.176,0);
	glVertex3f(-1,-1,-1.1);
	glVertex3f(-1,-1,-1.5);
	glVertex3f(-1,-4,-1.5);
	glVertex3f(-1,-4,-1.1);
	
	//right
	glColor3f(0.49,0.176,0);
	glVertex3f(-0.6,-1,-1.1);
	glVertex3f(-0.6,-4,-1.1);
	glVertex3f(-0.6,-1,-1.1);
	glVertex3f(-0.6,-1,-1.5);
	
	//top
	glColor3f(0.35,0.2745,0);
	glVertex3f(-1,-1,-1.5);
	glVertex3f(-1,-1,-1.1);
	glVertex3f(-0.6,-1,-1.1);
	glVertex3f(-0.6,-1,-1.5);
	
	//bottom
	glColor3f(0.35,0.2745,0);
	glVertex3f(-1,-4,-1.5);
	glVertex3f(-1,-4,-1.1);
	glVertex3f(-0.6,-4,-1.1);
	glVertex3f(-0.6,-4,-1.5);
	
	glEnd();
	
	glBegin(GL_QUADS);
	//BOTTOMRIGHT LEG
	//front
	glColor3f(0.588,0.2745,0);
	glVertex3f(3.6,-1,1);
	glVertex3f(3.6,-4,1);
	glVertex3f(4,-4,-1);
	glVertex3f(4,-1,1);
	
	//back
	glColor3f(0.588,0.2745,0);
	glVertex3f(3.6,-1,0.6);
	glVertex3f(4,-1,0.6);
	glVertex3f(4,-4,0.6);
	glVertex3f(3.6,-4,0.6);
	
	//left
	glColor3f(0.49,0.176,0);
	glVertex3f(3.6,-1,1);
	glVertex3f(3.6,-1,0.6);
	glVertex3f(3.6,-4,0.6);
	glVertex3f(3.6,-4,1);
	glEnd();
	glBegin(GL_QUADS);
	
	//right
	glColor3f(0.49,0.176,0);
	glVertex3f(4,-1,0.6);
	glVertex3f(4,-1,1);
	glVertex3f(4,-4,1);
	glVertex3f(4,-4,0.6);
	
	//top
	glColor3f(0.35,0.2745,0);
	glVertex3f(3.6,-1,0.6);
	glVertex3f(3.6,-1,1);
	glVertex3f(4,-1,1);
	glVertex3f(4,-1,0.6);
	glEnd();
	glBegin(GL_QUADS);
	
	//bottom
	glColor3f(0.35,0.2745,0);
	glVertex3f(3.6,-4,0.6);
	glVertex3f(4,-4,0.6);
	glVertex3f(4,-4,1);
	glVertex3f(3.6,-4,1);
	glEnd();
	glBegin(GL_QUADS);
	
	//TOPRIGHT LEG
	//front
	glColor3f(0.588,0.2745,0);
	glVertex3f(3.6,-1,-1.1);
	glVertex3f(3.6,-4,-1.1);
	glVertex3f(4,-4,-1.1);
	glVertex3f(4,-4,-1.5);
	
	//back
	glColor3f(0.588,0.2745,0);
	glVertex3f(3.6,-1,-1.5);
	glVertex3f(4,-1,-1.5);
	glVertex3f(4,-4,-1.5);
	glVertex3f(3.6,-4,-1.5);
	
	//left
	glColor3f(0.49,0.176,0);
	glVertex3f(3.6,-1,-1.1);
	glVertex3f(3.6,-1,-1.5);
	glVertex3f(3.6,-4,-1.5);
	glVertex3f(3.6,-4,-1.1);
	
	//right
	glColor3f(0.49,0.176,0);
	glVertex3f(4,-1,-1.1);
	glVertex3f(4,-4,-1.1);
	glVertex3f(4,-4,-1.5);
	glVertex3f(4,-1,-1.5);
	
	//top
	glColor3f(0.35,0.2745,0);
	glVertex3f(3.6,-1,-1.5);
	glVertex3f(3.6,-1,-1.1);
	glVertex3f(4,-1,-1.1);
	glVertex3f(4,-1,-1.5);
	
	//bottom
	glColor3f(0.35,0.2745,0);
	glVertex3f(3.6,-4,-1.5);
	glVertex3f(4,-4,-1.5);
	glVertex3f(4,-4,-1.1);
	glVertex3f(3.6,-4,-1.1);
	glEnd();
	//glFlush();
	
	
	
	
	
	glBegin(GL_QUADS);
	//LEFTPLANK
	//front
	glColor3f(0.49,0.176,0);
	glVertex3f(-1,-3.25,1);
	glVertex3f(-1,-3.35,1);
	glVertex3f(-0.6,-3.35,1);
	glVertex3f(-0.6,-3.25,1);
	
	//back
	glColor3f(0.49,0.176,0);
	glVertex3f(-1,-3.25,-1.1);
	glVertex3f(-0.6,-3.25,-1.1);
	glVertex3f(-0.6,-3.35,-1.1);
	glVertex3f(-1,-3.35,-1.1);
	
	//left
	glColor3f(0.588,0.2745,0);
	glVertex3f(-1,-3.25,1);
	glVertex3f(-1,-3.25,-1.1);
	glVertex3f(-1,-3.35,-1.1);
	glVertex3f(-1,-3.35,1);
	
	//right
	glColor3f(0.588,0.2745,0);
	glVertex3f(-0.6,-3.25,1);
	glVertex3f(-0.6,-3.35,1);
	glVertex3f(-0.6,-3.35,-1.1);
	glVertex3f(-0.6,-3.25,-1.1);
	
	//top
	glColor3f(0.49,0.176,0);
	glVertex3f(-1,-3.25,-1.1);
	glVertex3f(-1,-3.25,1);
	glVertex3f(-0.6,-3.25,1);
	glVertex3f(-0.6,-3.25,-1.1);
	
	//bottom
	glColor3f(0.49,0.176,0);
	glVertex3f(-1,-3.35,-1.1);
	glVertex3f(-0.6,-3.35,-1.1);
	glVertex3f(-0.6,-3.35,1);
	glVertex3f(-1,-3.35,1);
	glEnd();
	
	glBegin(GL_QUADS);
	
	
	//RIGHTPLANK
	//front
	glColor3f(0.49,0.176,0);
	glVertex3f(3.6,-3.25,0.6);
	glVertex3f(3.6,-3.35,0.6);
	glVertex3f(4,-3.35,0.6);
	glVertex3f(4,-3.25,0.6);
	
	//back
	glColor3f(0.49,0.176,0);
	glVertex3f(3.6,-3.25,-1.1);
	glVertex3f(4,-3.25,-1.1);
	glVertex3f(4,-3.35,-1.1);
	glVertex3f(3.6,-3.35,-1.1);
	
	//left
	glColor3f(0.588,0.2745,0);
	glVertex3f(3.6,-3.25,0.6);
	glVertex3f(3.6,-3.25,-1.1);
	glVertex3f(3.6,-3.35,-1.1);
	glVertex3f(3.6,-3.35,0.6);
	
	//right
	glColor3f(0.588,0.2745,0);
	glVertex3f(4,-3.25,0.6);
	glVertex3f(4,-3.35,0.6);
	glVertex3f(4,-3.35,-1.1);
	glVertex3f(4,-3.25,-1.1);
	
	//top
	glColor3f(0.49,0.176,0);
	glVertex3f(3.6,-3.35,-1.1);
	glVertex3f(3.6,-3.25,0.6);
	glVertex3f(4,-3.25,0.6);
	glVertex3f(3.6,-3.35,0.6);
	
	//bottom
	glColor3f(0.49,0.176,0);
	glVertex3f(3.6,-3.35,-1.1);
	glVertex3f(4,-3.35,-1.1);
	glVertex3f(4,-3.35,0.6);
	glVertex3f(3.6,-3.25,0.6);
	glEnd();
	
	glBegin(GL_QUADS);
	//MIDPLANK
	//front
	glColor3f(0.45,0.2745,0);
	glVertex3f(-0.6,-3.25,-0.15);
	glVertex3f(-0.6,-3.35,-0.15);
	glVertex3f(3.6,-3.35,-0.15);
	glVertex3f(3.6,-3.25,-0.15);
	
	//back
	glColor3f(0.45,0.2745,0);
	glVertex3f(-0.6,-3.25,-0.35);
	glVertex3f(3.6,-3.25,-0.35);
	glVertex3f(3.6,-3.35,-0.35);
	glVertex3f(-0.6,-3.35,-0.35);
	
	//left
	glColor3f(0.35,0.2745,0);
	glVertex3f(-0.6,-3.25,-0.35);
	glVertex3f(-0.6,-3.35,-0.35);
	glVertex3f(-0.6,-3.35,0.15);
	glVertex3f(-0.6,-3.25,0.15);
	
	//right
	glColor3f(0.35,0.2745,0);
	glVertex3f(3.6,-3.25,-0.35);
	glVertex3f(3.6,-3.25,-0.15);
	glVertex3f(3.6,-3.35,-0.15);
	glVertex3f(3.6,-3.35,-0.35);
	
	//top
	glColor3f(0.588,0.2745,0);
	glVertex3f(-0.6,-3.25,-0.35);
	glVertex3f(-0.6,-3.25,-0.15);
	glVertex3f(3.6,-3.25,-0.15);
	glVertex3f(3.6,-3.25,-0.35);
	
	//bottom
	glColor3f(0.588,0.2745,0);
	glVertex3f(-0.6,-3.35,-0.35);
	glVertex3f(3.6,-3.35,-0.35);
	glVertex3f(3.6,-3.35,-0.15);
	glVertex3f(-0.6,-3.35,-0.15);
	

	glEnd();
	glutSwapBuffers();
}

void reshape(int w, int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60,1,2,50);
	glMatrixMode(GL_MODELVIEW);
}

void init(void)
{
	glClearColor(1,1,1,0);
	glEnable(GL_DEPTH_TEST);

	
}
void timer(int)
{
	glutPostRedisplay();
	glutTimerFunc(1000/60,timer,0);
	switch(state)
	{
		case 1:
			if(x_position<360)
				x_position+= 0.60;
			else
				state=-1;
			break;
		
		case -1:
			if(x_position>0)
				x_position-=0.60;
			else
				state= 1;
			break;
		
	}
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutCreateWindow("Hello how are you");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glColor3f(1.0, 1.0, 1.0);
    
	//glutTimerFunc(000,timer,0);
	glutMainLoop();
	return 0;
}
