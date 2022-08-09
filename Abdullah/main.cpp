#include<windows.h>

#include<mmsystem.h>

#include<GL\glut.h>

#include <GL/glu.h>

#include<math.h>

#include <stdlib.h>

#include<stdio.h>

#define PI 3.1416


    GLint i, j, k,x=0,y=0,speed=0,alt=0,n1=1000,n2=1100,s1=0,s2=1,s3=1;

    GLfloat sun_spin=0, sun_x=0, sun_y=0,reduce=10;

    GLfloat ax=0,bx=0,cx=0,dx=0,str=500.0,mn=500.0;

    GLfloat sr=0.0,sg=0.749,sb=1.0;

    GLfloat spin = 0.0;


bool condition=false;

    GLfloat position = 0.0f;

    GLfloat _move =5.0f;

    GLfloat position1 = 0.0f;

    GLfloat _move1 =3.0f;

    GLfloat position2 = 900.0f;

    GLfloat _move2 =3.0f;


void init(void)

{

	glClearColor(0,181,226,0);

	glMatrixMode(GL_PROJECTION);

	gluOrtho2D(0.0, 1000.0, 0.0, 700.0);

}



float r(int a)
{

    return x=4,y=8;
}


float r(int a,int b)
{

    return x=0,y=0;

}


void updatey(int value)
{
    y= 8.0f;

    glutPostRedisplay();
    glutTimerFunc(100, updatey, 0);
}


void updatex(int value)
{
    x=4.0f;

    glutPostRedisplay();

    glutTimerFunc(100, updatex, 0);

}


///*** Circle_Model***///

void circle(GLdouble rad)

{

   glBegin(GL_POLYGON);

    {

      	for(int i=0;i<50;i++)

        {

            float pi=3.1416;

            float A=(i*2*pi)/50;

            float r=rad;

            float x = r * cos(A);



            float y = r * sin(A);

            glVertex2f(x,y );

        }

    }

    glEnd();

}


void circle1(GLdouble rad)

{
    glBegin(GL_POLYGON);

    {

      	for(int i=0;i<200;i++)

        {
            float pi=3.1416;

            float A=(i*2*pi)/200;

            float r=rad;

            float x = r * cos(A);

            float y = r+10 * sin(A);

            glVertex2f(x,y );

        }

    }

    glEnd();

}
void update2(int value)
{

    if(position2 <-1.3)

    {
        position2 -= _move2;

    }

	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds

}

//*** Cloud_Model***///

void cloud_model_one()
{

    glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();

    glTranslatef(320,210,0);

    circle(15);

    glPopMatrix();


    ///Top

    glPushMatrix();

    glTranslatef(340, 225, 0);

    circle(16);

    glPopMatrix();

    ///Right

    glPushMatrix();

    glTranslatef(360,210,0);

    circle(16);

    glPopMatrix();





    ///middle_Fill

    glPushMatrix();

    glTranslatef(355,210,0);

    circle(16);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(350,210,0);

    circle(16);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(345,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(340,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(335,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(330,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(325,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(320,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(315,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(310,204,0);

    circle(10);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(305,204,0);

    circle(10);

    glPopMatrix();



    ///Fill End

}


void cloud_model_Two(){

    glColor3f(1.25, 0.924, 0.930);

   ///Left_Part

    glPushMatrix();

    glTranslatef(305,205,0);

    circle(10);

    glPopMatrix();


    ///Top


    glPushMatrix();

    glTranslatef(320,210,0);

    circle(15);

    glPopMatrix();



    ///Right_Part

    glPushMatrix();

    glTranslatef(334,207,0);

    circle(10);

    glPopMatrix();



    ///Bottom_Part

    glPushMatrix();

    glTranslatef(320,207,0);

    circle(10);

    glPopMatrix();

}



void cloud_model_Three(){

    glColor3f(1.25, 0.924, 0.930);



    ///Left_Part

    glPushMatrix();

    glTranslatef(300,200,0);

    circle(15);

    glPopMatrix();


    ///Top_Left


    glPushMatrix();

    glTranslatef(320,210,0);

    circle(15);

    glPopMatrix();


    ///Top

    glPushMatrix();

    glTranslatef(340,220,0);

    circle(16);

    glPopMatrix();


    ///Top_Right

    glPushMatrix();

    glTranslatef(360,210,0);

    circle(15);

    glPopMatrix();


    ///Right_Part

    glPushMatrix();

    glTranslatef(380,200,0);

    circle(15);

    glPopMatrix();


    ///Bottom_Right

    glPushMatrix();

    glTranslatef(360,190,0);

    circle(20);

    glPopMatrix();


    ///Bottom_Left

    glPushMatrix();

    glTranslatef(320,190,0);

    circle(20);

    glPopMatrix();


    ///Bottom

    glPushMatrix();

    glTranslatef(340,190,0);

    circle(20);

    glPopMatrix();


    ///Fill End

}

	///beach_Shadow3

	 glBegin(GL_POLYGON);

	 glColor3ub(0, 143, 179);

	 glVertex2i(600,0);

	 glVertex2i(600, 50);

	 glVertex2i(1000,30);

	 glVertex2i(1000,0);

	 glEnd();
}

///Windmill_Stand_Model

void Windmill_Stand_Model()
{

    glColor3f(1.0,0.8, 0.7);

    glBegin(GL_POLYGON);

    glVertex2i(375, 100);

    glVertex2i(380, 240);

    glVertex2i(384, 240);

    glVertex2i(390, 100);

    glEnd();

}



///Windmill_Blades_Model


void Windmill_Blade()
{

    ///Blade_One

    glPushMatrix();

    glRotatef(spin,0,0,90);

    glBegin(GL_POLYGON);

    glVertex2i(-5, 0);

    glVertex2i(-85, -36);

    glVertex2i(-83, -37);

    glVertex2i(-3, -8);

    glEnd();

    glPopMatrix();



    ///Blade_Two

    glPushMatrix();

    glRotatef(spin,0,0,90);

    glBegin(GL_POLYGON);

    glVertex2i(0, 5);

    glVertex2i(45, 70);

    glVertex2i(50, 73);

    glVertex2i(5, 0);

    glEnd();

    glPopMatrix();



    ///Blade_Three

    glPushMatrix();

    glRotatef(spin,0,0,90);

    glBegin(GL_POLYGON);

    glVertex2i(68, -78);

    glVertex2i(0,0);

    glVertex2i(5, 5);

    glVertex2i(70, -77);

    glEnd();

    glPopMatrix();



}

///Windmill_Final_Model

void Windmill(){



    ///Windmill_Stand

    glColor3f(0.0,0.0, 1.0);

    glPushMatrix();

    Windmill_Stand_Model();

    glPopMatrix();



    ///Windmill_Motor

   glColor3ub(208, 211, 212);

    glPushMatrix();

    glTranslatef(380,250,0);

    circle(10);

    glPopMatrix();



    ///Windmill_Rotary_Blades

    glColor3ub(208, 211, 212);

    glPushMatrix();

    glTranslatef(380,251,0);

    Windmill_Blade();

    glPopMatrix();



}

///Cloud_One_Model_One

void cloud_one()
{
    glPushMatrix();

    glTranslatef(cx,225,0);//-40

    cloud_model_one();

    glPopMatrix();

}

bool con(){

return condition=true;

}


float updatex()
{

  return   n1=-700,s1=241,s2=240,s3=236;

}

float updatex1()
{

  return   n1=1000,s1=0,s2=1,s3=1;

}


void night(){


glColor3f(.0, 0.0, 0.0);


    glPushMatrix();

    glBegin(GL_POLYGON);

    glVertex3i(0,n1,0);

    glVertex3i(0,1000, 0);

    glVertex3i(1200,1000, 0);

    glVertex3i(1200,n1, 0);

    glPopMatrix();

    glEnd();

}


///Cloud_Two_Model_one



void cloud_two()
{

    glPushMatrix();

    glTranslatef(bx+100,320,0);

    cloud_model_one();

    glPopMatrix();



}



///Cloud_Three_Model_Two



void cloud_three(){

    glPushMatrix();

    glTranslatef(ax-80,330,0);

    cloud_model_Two();

    glPopMatrix();

}

///Cloud_Four_Model_Two



void cloud_four(){

    glPushMatrix();

    glTranslatef(dx+300,375,0);

    cloud_model_Two();

    glPopMatrix();

}

///Cloud_Five_Model_Three

void cloud_five(){



    glPushMatrix();

    glTranslatef(ax+-300,310,0);

    cloud_model_Three();

    glPopMatrix();

}

///Cloud_Six_Model_Three

void cloud_six(){



    glPushMatrix();

    glTranslatef(cx+-500,400,0);

    cloud_model_Three();

    glPopMatrix();

}

///Windmill

void Windmill_One(){

    glColor3f(0.11, 0.23, 0.36);

    glPushMatrix();

    glTranslatef(0,190,0);//-10

    Windmill();

    glPopMatrix();

}



void Windmill_Two(){

    glColor3f(0.11, 0.23, 0.36);

    glPushMatrix();

    glTranslatef(50,130,0);//-70

    Windmill();

    glPopMatrix();

}

void display(void)

{

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.0, 1.0);


    night();

    star();

    Sun();

    House_Big_Two();

    plane2();

    tree();

    Tilla_Four();

    Hill_Big_Two();

    Hill_Small_two();

    Hill_Small_One();

    cloud_three();

    cloud_four();

    Windmill_One();

    Windmill_Two();

    Tilla_One();

    Tilla_Two();

    Tilla_Three();

    cloud_one();

    Tree_One();

    Tree_Two();

    Tree_Three();

    Tree_Four();

    Tree_Five();

    Tree_Six();

    Tree_Seven();

    Tree_Eight();

    Tree_Twelve();

    House_Big_One();

    cloud_two();

    cloud_five();

    cloud_six();

    beach();

    Boat();


	glFlush();

}



///Speed & Movement

void move_right(){



    spin = spin +.1;
    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    if(cx>1000){
        cx = -300;
    }
    if(bx>1000){
            bx= -400;

    }
    if(cx>1000){
            cx= -400;

    }
    if(dx>1000){
            dx= -500;

    }


    glutPostRedisplay();
}




void mouse(int key, int state, int x, int y){

    switch (key)

    {

    case GLUT_LEFT_BUTTON:

        if (state == GLUT_DOWN)

        {

            glutIdleFunc(move_right);

        }

        break;

    case GLUT_MIDDLE_BUTTON:

    case GLUT_RIGHT_BUTTON:

        if (state == GLUT_DOWN)

        {

            glutIdleFunc(NULL);

        }

        break;

    default:

        break;

    }



}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {


  case 'n':

    updatex();

    condition=true;

    break;



   case 'd':

       updatex1();

       condition=false;

   break;

   glutPostRedisplay();

}

}

int main(int argc, char** argv)

{

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowPosition(22, 30);

	glutInitWindowSize(1500, 750);

	glutCreateWindow("Sea_Beach With_Mountain");

	init();

	glutDisplayFunc(display);

	glutTimerFunc(20, update, 0);

	glutTimerFunc(20, update1, 0);

	glutTimerFunc(20, update2, 0);


    glutMouseFunc(mouse);

    glutKeyboardFunc(handleKeypress);

	glutMainLoop();

}
