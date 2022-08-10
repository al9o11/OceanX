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


///*** Cloud_Model***///

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


void hill_big2(){


    ///Hill

	glBegin(GL_POLYGON);

    glColor3f(0.38, 0.41, 0.36);

	glVertex2i(330, 70);

	glVertex2i(200, 170);

	glVertex2i(230, 190);

	glVertex2i(220, 180);

	glVertex2i(200, 190);

	glVertex2i(190, 180);

	glVertex2i(170, 190);

    glVertex2i(70, 70);


	glEnd();


	///Hill_Snow

    glBegin(GL_POLYGON);

    glColor3f(1.25, 0.924, 0.930);



	glVertex2i(200, 225);

	glVertex2i(230, 190);

	glVertex2i(220, 180);

	glVertex2i(200, 190);

	glVertex2i(190, 180);

	glVertex2i(170, 190);

	glEnd();

}


void hill_123()
{

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(390.0f,30.0f);
    glVertex2f(600.0f,30.0f);
    glVertex2f(600.0f,180.0f);
    glVertex2f(500.0f,330.0f);
    glColor3f(0.0f,0.0f,90.0f);
    glVertex2f(360.0f,60.0f);
    glEnd();

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_TRIANGLES);
    glVertex2f(600.0f,180.0f);
    glVertex2f(600.0f,300.0f);
    glColor3f(0.0f,0.0f,90.0f);
    glVertex2f(560.0f,240.0f);
    glEnd();

}

void hill_small()
{
    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(205.0f,60.0f);
    glColor3f(0.38, 0.41, 0.36);
    glVertex2f(70.0f,250.0f);
    glColor3f(0.0f,0.0f,90.0f);
    glVertex2f(0.0f,150.0f);
    glEnd();

}


void house_smallt(){
    glBegin(GL_QUADS);
    glColor3ub(100, 50, 0);//rgb color picker

    glVertex2f(160, 450); // x, y
    glVertex2f(160, 270); // x, y
    glVertex2f(210, 270); // x, y
    glVertex2f(210, 450); // x, y

    glEnd();

    //window 1
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(170, 440); // x, y
    glVertex2f(170, 430); // x, y
    glVertex2f(200, 430); // x, y
    glVertex2f(200, 440); // x, y

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 255, 0); // Black

    glVertex2f(185, 440);// x, y
    glVertex2f(185, 430);// x, y

    glEnd();


    //window 2
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(170, 410); // x, y
    glVertex2f(170, 400); // x, y
    glVertex2f(200, 400); // x, y
    glVertex2f(200, 410); // x, y

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 255, 0); // Black

    glVertex2f(185, 410);// x, y
    glVertex2f(185, 400);// x, y

    glEnd();

    //window 3
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(170, 380); // x, y
    glVertex2f(170, 370); // x, y
    glVertex2f(200, 370); // x, y
    glVertex2f(200, 380); // x, y

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 255, 0); // Black

    glVertex2f(185, 380);// x, y
    glVertex2f(185, 370);// x, y

    glEnd();

    //window 4
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(170, 350); // x, y
    glVertex2f(170, 340); // x, y
    glVertex2f(200, 340); // x, y
    glVertex2f(200, 350); // x, y

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 255, 0); // Black

    glVertex2f(185, 350);// x, y
    glVertex2f(185, 340);// x, y

    glEnd();

    //window 5
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(170, 320); // x, y
    glVertex2f(170, 310); // x, y
    glVertex2f(200, 310); // x, y
    glVertex2f(200, 320); // x, y

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 255, 0); // Black

    glVertex2f(185, 320);// x, y
    glVertex2f(185, 310);// x, y

    glEnd();


    //window 6
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(170, 290); // x, y
    glVertex2f(170, 280); // x, y
    glVertex2f(200, 280); // x, y
    glVertex2f(200, 290); // x, y

    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 255, 0); // Black

    glVertex2f(185, 290);// x, y
    glVertex2f(185, 280);// x, y

    glEnd();

}

void house_small()
{

    glBegin(GL_QUADS);
    glColor3ub(237, 214, 108);//rgb color picker

    glVertex2f(0, 400); // x, y
    glVertex2f(0, 220); // x, y
    glVertex2f(30, 220); // x, y
    glVertex2f(30, 400); // x, y

    glEnd();


    //window 1
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(10, 390); // x, y
    glVertex2f(10, 380); // x, y
    glVertex2f(20, 380); // x, y
    glVertex2f(20, 390); // x, y

    glEnd();


    //window 2
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(10, 360); // x, y
    glVertex2f(10, 350); // x, y
    glVertex2f(20, 350); // x, y
    glVertex2f(20, 360); // x, y

    glEnd();



    //window 3
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(10, 330); // x, y
    glVertex2f(10, 320); // x, y
    glVertex2f(20, 320); // x, y
    glVertex2f(20, 330); // x, y

    glEnd();



    //window 4
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(10, 300); // x, y
    glVertex2f(10, 290); // x, y
    glVertex2f(20, 290); // x, y
    glVertex2f(20, 300); // x, y

    glEnd();


    //window 5
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(10, 270); // x, y
    glVertex2f(10, 260); // x, y
    glVertex2f(20, 260); // x, y
    glVertex2f(20, 270); // x, y

    glEnd();


    //window 6
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);//rgb color picker

    glVertex2f(10, 240); // x, y
    glVertex2f(10, 230); // x, y
    glVertex2f(20, 230); // x, y
    glVertex2f(20, 240); // x, y

    glEnd();

}



///Tilla_Model

void Tilla_One_Model()
{

    ///Tilla

	glBegin(GL_POLYGON);

	glColor3ub(34.0, 153.0, 84.0);

	glVertex2i(125, 70);

	glVertex2i(150, 80);

	glVertex2i(160, 90);

	glVertex2i(170, 90);

	glVertex2i(180, 100);

	glVertex2i(190, 105);

	glVertex2i(200, 108);

	glVertex2i(400, 10);

	glVertex2i(300, 70);


	glEnd();


}


void Tilla_Two_Model(){


	glColor3ub(34.0, 153.0, 84.0);

    /// Left_Part

    glPushMatrix();

    glTranslatef(430,90,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(420,87,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(410,80,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(400,80,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(390,70,0);

    circle(30);

    glPopMatrix();


    ///Right_Part

    glPushMatrix();

    glTranslatef(445,80,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(455,75,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(465,70,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(470,65,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(480,60,0);

    circle(30);

    glPopMatrix();


    glPushMatrix();

    glTranslatef(485,55,0);

    circle(20);

    glPopMatrix();

}


///Beach_Model

void beach()
{

    ///beach

	glBegin(GL_POLYGON);

    glColor3f(1.0,0.9,0.7 );

	glVertex2i(0, 10);

	glVertex2i(0,270);

	glVertex2i(1000, 270);

	glVertex2i(1000, 250);


	glEnd();


    ///beach_Shadow

	glBegin(GL_POLYGON);

	glColor3f(1.0,0.8, 0.7);

	glVertex2i(0, 150);

	glVertex2i(0, 250);

	glVertex2i(1000, 250);

	glVertex2i(1000, 200);


	glEnd();


	 ///Sea 0.7/0.4/0.4


	glBegin(GL_POLYGON);

    glColor3ub(0, 143, 179);

	glVertex2i(0,0);

	glVertex2i(0,185);

	glVertex2i(600,185);

	glVertex2i(600,0);


	glEnd();


    ///Sea curve

	glBegin(GL_POLYGON);

	glColor3ub(0, 143, 179);

	glVertex2i(600,0);

	glVertex2i(600, 185);

	glVertex2i(1000, 245);

	glVertex2i(1000,0);


	glEnd();



	 ///beach_2

	glBegin(GL_POLYGON);
    glColor3ub(0, 143, 179);



	glVertex2i(0, 00);

	glVertex2i(0, 80);

	glVertex2i(600,50);

	glVertex2i(640, 0);

	glEnd();


		 ///beach_3

	glBegin(GL_POLYGON);
    glColor3ub(0, 143, 179);


	glVertex2i(0, 00);

	glVertex2i(0, 50);

	glVertex2i(600,50);

	glVertex2i(600, 0);

	glEnd();


	///beach_Shadow3

	 glBegin(GL_POLYGON);

	 glColor3ub(0, 143, 179);

	 glVertex2i(600,0);

	 glVertex2i(600, 50);

	 glVertex2i(1000,30);

	 glVertex2i(1000,0);

	 glEnd();
}



    ///Boat

void Boat()
{

     glPushMatrix();

     glTranslatef(position,0.0f,0.0f);

     glTranslatef(-70,0.0f,0.0f);


    //bottom
    glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex2i(200,50);

	glVertex2i(100, 100);

	glVertex2i(400,100);

	glVertex2i(300,50);

    glEnd();


    glBegin(GL_POLYGON);

	glColor3ub(100.0, 105.0, 4.0);

	glVertex2i(230,100);

	glVertex2i(230, 150);

	glVertex2i(320,150);

	glVertex2i(320,100);

    glEnd();


    glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex2i(360,140);

	glVertex2i(350, 80);

	glVertex2i(360,50);

    glEnd();


    glPopMatrix();

}


void update(int value)
{

    if(position <-300.0)

        position = 1500.0f;

    position -= _move;

	glutPostRedisplay();

	glutTimerFunc(50, update, 0);
}



/// Tree_Model

void Tree_Model_One()
{

    glPushMatrix();

    glTranslatef(110,110,0);

    circle(15);

    glPopMatrix();

    glPushMatrix();

    glTranslatef(110,100,0);

    circle(15);

    glPopMatrix();

    glBegin(GL_POLYGON);

    glColor3ub(27.0, 38,49);

	glVertex2f(109, 70);

	glVertex2f(109, 90);

	glVertex2f(111, 90);

	glVertex2f(111, 70);

    glEnd();


}

void Tree_Model_Two()
{

    glPushMatrix();

    glTranslatef(130,130,0);

    circle(5);

    glPopMatrix();

    glPushMatrix();

    glTranslatef(125,126,0);

    circle(5);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(135,126,0);

    circle(5);

    glPopMatrix();



    glPushMatrix();

    glTranslatef(130,125,0);

    circle(5);

    glPopMatrix();



    glBegin(GL_POLYGON);

    glColor3ub(27, 38, 49);

	glVertex2f(129, 110);

	glVertex2f(129, 124);

	glVertex2f(131, 124);

	glVertex2f(131, 110);


    glEnd();

}


void Tree_Model_Three()
{

    glBegin(GL_POLYGON);

	glVertex2f(125, 123);

	glVertex2f(133, 145);

	glVertex2f(141, 123);

	glEnd();


    glBegin(GL_POLYGON);

    glColor3ub(27, 38, 49);

	glVertex2f(132, 110);

	glVertex2f(132, 124);

	glVertex2f(134, 124);

	glVertex2f(134, 110);

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


  ///plane//



void plane()
{

    glColor3ub(255.0f,255.0f,255.0f);

    glPushMatrix();

    glBegin(GL_POLYGON);
    glVertex2f(36.0f,36.0f);
    glVertex2f(34.0f,34.0f);
    glVertex2f(36.0f,32.0f);
    glVertex2f(45.0f,32.0f);
    glVertex2f(49.0f,35.0f);
    glVertex2f(46.0f,36.0f);
    glEnd();

    glColor3ub(200.0,200.0,200.0);
    glBegin(GL_POLYGON);
    glVertex2f(34.0f,34.0f);
    glVertex2f(35.0f,33.0f);
    glVertex2f(46.3f,32.9f);
    glVertex2f(47.8f,34.0f);
    glEnd();

    ///wings
    glColor3ub(200.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(46.0f,36.0f);
    glVertex2f(47.5f,40.0f);
    glVertex2f(45.5f,40.0f);
    glVertex2f(43.0f,36.0f);
    glEnd();

    glColor3ub(200.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(39.0f,31.0f);
    glVertex2f(42.0f,31.0f);
    glVertex2f(40.0f,34.0f);
    glVertex2f(37.0f,34.0f);
    glEnd();

    glColor3ub(200.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(45.0f,34.0f);
    glVertex2f(47.0f,32.0f);
    glVertex2f(49.0f,32.0f);
    glVertex2f(47.0f,34.0f);
    glEnd();

    ///plane_lights
    glColor3ub(255.0,255.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(38.5f,31.4f);
    glVertex2f(39.0f,31.4f);
    glVertex2f(39.0f,31.9f);
    glVertex2f(38.5f,31.9f);
    glEnd();

    glColor3ub(255.0,255.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(46.5f,32.3f);
    glVertex2f(47.0f,32.3f);
    glVertex2f(47.0f,32.8f);
    glVertex2f(46.5f,32.8f);
    glEnd();

    ///windows
    glColor3ub(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(35.0f,34.5f);
    glVertex2f(36.5f,34.5f);
    glVertex2f(36.5f,35.5f);
    glVertex2f(35.8f,35.5f);
    glEnd();



    glPopMatrix();


}



void update1(int value)
{

     if(position1 <-400.0)

     position1 = 1200.0f;

     position1 -= _move1;

     glutPostRedisplay();

     glutTimerFunc(22, update1, 0);

}


///Model_End



///Object


/// plane


void plane2()
{

    glColor3ub(247, 249, 249);

    glPushMatrix();

    glTranslatef(position1,0,0);

    glTranslatef(100,250,0);

    glScaled(10.0f,10.0f,0.0f);

    plane();

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


void star()
{

   if ( condition==true)

   {

        glBegin(GL_POINTS);              // Each set of 4 vertices form a quad

        glColor3ub(247, 249, 249); // Red

        glVertex2f(500.1f, 500.3f);    // x, y

        glVertex2f( 550.1f, 504.0f);

        glVertex2f( 150.1f, 504.0f);

        glVertex2f( 310.1f, 504.0f);

        glVertex2f( 261.0f, 505.0f);

        glVertex2f( 453.1f, 506.0f);

        glVertex2f( 616.1f, 507.0f);

        glVertex2f( 763.1f, 508.0f);

        glVertex2f( 587.1f, 524.0f);

        glVertex2f( 954.1f, 574.0f);

        glVertex2f( 231.1f, 585.0f);

        glVertex2f( 275.1f, 566.0f);

        glVertex2f( 852.1f, 557.0f);

        glVertex2f( 476.1f, 548.0f);

        glVertex2f( 140.1f, 509.0f);

        glVertex2f( 350.1f, 510.0f);

        glVertex2f( 061.1f, 511.0f);

        glVertex2f( 463.1f, 512.0f);

        glVertex2f( 822.1f, 513.0f);

        glVertex2f( 110.1f, 514.0f);

        glVertex2f( 966.1f, 515.0f);

        glVertex2f( 211.1f, 516.0f);

        glVertex2f( 313.1f, 517.0f);

        glVertex2f( 869.1f, 518.0f);

        glVertex2f( 639.1f, 519.0f);

        glVertex2f( 106.1f, 520.0f);

        glVertex2f( 140.1f, 709.0f);

        glVertex2f( 350.1f, 810.0f);

        glVertex2f( 061.1f, 911.0f);

        glVertex2f( 463.1f, 412.0f);

        glVertex2f( 822.1f, 713.0f);

        glVertex2f( 110.1f, 614.0f);

        glVertex2f( 966.1f, 815.0f);

        glVertex2f( 211.1f, 916.0f);

        glVertex2f( 313.1f, 1017.0f);

        glVertex2f( 869.1f, 718.0f);

        glVertex2f( 639.1f, 919.0f);

        glVertex2f( 106.1f, 902.0f);

        glVertex2f( 106.1f, 908.0f);

         glVertex2f( 106.1f, 620.0f);

         glVertex2f( 250.1f, 630.0f);

         glVertex2f( 106.1f, 906.0f);

         glVertex2f( 116.1f, 530.0f);

         glVertex2f( 980.1f, 980.0f);

          glVertex2f( 900.1f, 930.0f);

         glVertex2f( 858.1f, 666.0f);

         glVertex2f( 845.1f, 642.0f);

         glVertex2f( 900.1f, 900.0f);

         glVertex2f( 910.1f, 903.0f);

         glVertex2f( 915.1f, 908.0f);

         glVertex2f( 919.1f, 920.0f);

         glVertex2f( 930.1f, 903.0f);

         glVertex2f( 935.1f, 905.0f);

         glVertex2f( 940.1f, 905.0f);

         glVertex2f( 945.1f, 910.0f);

         glVertex2f( 600.1f, 525.0f);

         glVertex2f( 650.1f, 535.0f);

        glVertex2f( 690.1f, 490.0f);

        glVertex2f( 550.1f, 600.0f);

        glVertex2f( 500.1f, 600.0f);


        glEnd();

}

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




///Hill_big_Two

void Hill_Big_Two(){

    glPushMatrix();

    glTranslatef(55,180,0);//-20

    hill_big2();

    glPopMatrix();

}

///Hill_Small_One

void Hill_Small_One(){

    glPushMatrix();

    glTranslatef(0,160,0);

    hill_small();

    glPopMatrix();



}

///House_big_Two

void House_Big_One(){

    glPushMatrix();

    glTranslatef(560,0,0);//-20

    house_smallt();

    glPopMatrix();
}

void House_Big_Two(){

    glPushMatrix();

    glTranslatef(675,50,0);//-20

    house_small();

    glPopMatrix();
}

void Hill_Small_two(){

    glPushMatrix();

    glTranslatef(400,160,0);

    hill_123();

    glPopMatrix();



}

/// Tilla_One_Model_One



void Tilla_One(){


    glPushMatrix();

    glTranslatef(0,200,0);

    Tilla_One_Model();

    glPopMatrix();


}

///Tilla_Two_Model_Two

void Tilla_Two(){

    glPushMatrix();

    glTranslatef(0,200,0);

    Tilla_Two_Model();

    glPopMatrix();


}

///Tilla_Three_Model_Two

void Tilla_Three(){


    glPushMatrix();

    glTranslatef(400,200,0);

    Tilla_Two_Model();

    glPopMatrix();


}

///Tilla_Four_Model_One

void Tilla_Four(){


    glColor3f(0.833, 1., 0.0);

    glPushMatrix();

    glTranslatef(380,200,0);


    Tilla_One_Model();

    glPopMatrix();


}

///Tree_1

void Tree_One(){

    glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(0,200,0);

    Tree_Model_One();

    glPopMatrix();

}



///Tree_2

void Tree_Two(){

     glColor3ub(46, 204, 13.0);

     glPushMatrix();

     glTranslatef(540,200,0);

     Tree_Model_One();

     glPopMatrix();

}

///Tree_3

void Tree_Three(){

    glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(750,200,0);

    Tree_Model_One();

    glPopMatrix();

}

///Tree_4

void Tree_Four(){

    glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(292,240,0);

    Tree_Model_One();

    glPopMatrix();

}



///Tree_5

void Tree_Five(){

    glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(30,180,0);//-20

    Tree_Model_Two();

    glPopMatrix();

}



///Tree_6

void Tree_Six(){

    glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(50,190,0);//-10

    Tree_Model_Two();

    glPopMatrix();

}

///Tree_7

void Tree_Seven(){

    glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(322,200,0);

    Tree_Model_Two();

    glPopMatrix();

}



///Tree_8

void Tree_Eight(){

     glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(350,185,0);

    Tree_Model_Two();

    glPopMatrix();

}



///Tree_12

void Tree_Twelve(){

    glColor3ub(46, 204, 13.0);

    glPushMatrix();

    glTranslatef(408,178,0);//-22

    Tree_Model_Three();

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

void tree(){

    glColor3f(0.11, 0.23, 0.36);

    glPushMatrix();

    glTranslatef(-120,-110,0);//-90

    Windmill();

    glPopMatrix();

}


///Object_End


///Display Function


void display(void)

{

	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 0.0, 1.0);


    night();

    star();

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
