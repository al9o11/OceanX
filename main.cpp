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


bool condition=false;

    GLfloat position = 0.0f;

    GLfloat _move =5.0f;

    GLfloat position1 = 0.0f;

    GLfloat _move1 =3.0f;

    GLfloat position2 = 400.0f;

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

void lightHouse()
{
        glColor3ub(255.0f,171.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(905.0f,0.0f);
    glVertex2f(950.0f,0.0f);
    glVertex2f(950.0f,200.0f);
    glVertex2f(905.0f,200.0f);
    glEnd();

    glColor3ub(255.0f,210.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(905.0f,200.0f);
    glVertex2f(950.0f,200.0f);
    glVertex2f(965.0f,210.0f);
    glVertex2f(900.0f,210.0f);
    glEnd();

    glColor3ub(204.0f,110.0f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(906.0f,210.0f);
    glVertex2f(949.0f,210.0f);
    glVertex2f(949.0f,240.0f);
    glVertex2f(906.0f,240.0f);
    glEnd();

    glColor3ub(255.0f,255.0f,255.0f);
    glBegin(GL_POLYGON);
    glVertex2f(926.5f,240.0f);
    glVertex2f(932.0f,260.0f);
    glVertex2f(926.5f,280.0f);
    glVertex2f(921.0f,260.0f);
    glEnd();

}

void hill_RightBottom()
{
    glPushMatrix();
    glColor3ub(14,141,14);
    glBegin(GL_POLYGON);
    glVertex2f(360.0f,0.0f);
    glVertex2f(570.0f,0.0f);
    glVertex2f(570.0f,150.0f);
    glVertex2f(470.0f,300.0f);
    glColor3ub(91,143,95);
    glVertex2f(330.0f,30.0f);
    glEnd();

    glColor3ub(14,114,14);
    glBegin(GL_TRIANGLES);
    glVertex2f(570.0f,150.0f);
    glVertex2f(570.0f,270.0f);
    glColor3ub(91,143,95);
    glVertex2f(530.0f,210.0f);
    glEnd();
    glPopMatrix();

}

void hill_small()
{
    glColor3ub(14,114,14);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,30.0f);
    glVertex2f(205.0f,30.0f);
    glVertex2f(205.0f,60.0f);
    glColor3f(0.38, 0.41, 0.36);
    glVertex2f(70.0f,250.0f);
    glColor3ub(91,143,95);
    glVertex2f(0.0f,150.0f);
    glEnd();

}


///Beach_Model

void beach()
{

    ///beach
    glPushMatrix();
	glBegin(GL_POLYGON);

    glColor3ub(238,233,244);
	glVertex2i(900, 350);

	glColor3ub(238,233,244);
	glVertex2i(850, 330);

	glColor3ub(238,233,244);
	glVertex2i(800, 300);

	glColor3ub(238,233,244);
	glVertex2i(750, 270);

	glColor3ub(238,233,244);
	glVertex2i(700, 240);

	glColor3ub(163,124,87);
	glVertex2i(650, 220);

	glColor3ub(163,124,87);
	glVertex2i(620, 200);

    glColor3ub(115,118,112);
	glVertex2i(400,0);

    glColor3ub(163,124,87);
	glVertex2i(1000,0);

    glColor3ub(115,118,112);
	glVertex2i(1000, 375);


	glEnd();

	glPopMatrix();


	 ///Sea 0.7/0.4/0.4


	glBegin(GL_POLYGON);
	glColor3ub(149,164,210);
    glVertex2i(0,250);

    glColor3ub(9,152,219);
	glVertex2i(0,0);

	glColor3ub(9,152,219);
	glVertex2i(400,0);

	glColor3ub(9,152,219);
	glVertex2i(620,200);

	glColor3ub(9,152,219);
	glVertex2i(650,220);

    glColor3ub(9,152,219);
	glVertex2i(700,240);

	glColor3ub(9,152,219);
	glVertex2i(750,270);

	glColor3ub(238,233,244);
	glVertex2i(800,300);

	glColor3ub(238,233,244);
	glVertex2i(850,330);

	glColor3ub(238,233,244);
	glVertex2i(900,350);



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
	glVertex2i(100,25);

    glColor3f(0.0, 0.0, 0.1);
	glVertex2i(50, 50);

    glColor3f(0.0, 0.0, 0.2);
	glVertex2i(200,50);

    glColor3f(0.0, 0.0, 0.3);
	glVertex2i(150,25);

    glEnd();


    glBegin(GL_POLYGON);

	glColor3ub(100.0, 105.0, 4.0);
	glVertex2i(115,50);

    glColor3ub(120.0, 100.0, 10.0);
	glVertex2i(115, 75);

    glColor3ub(140.0, 95.0, 16.0);
	glVertex2i(160,75);

    glColor3ub(160.0, 90.0, 22.0);
	glVertex2i(160,50);

    glEnd();


    glBegin(GL_POLYGON);

	glColor3f(0.0, 0.0, 0.0);

	glVertex2i(180,70);

	glVertex2i(175, 40);

	glVertex2i(180,25);

    glEnd();


    glPopMatrix();

}


void update(int value)
{

    if(position <-300.0)

        position = 250.0f;

    position -= _move;

	glutPostRedisplay();

	glutTimerFunc(50, update, 0);
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


void planePosition()
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


///Hill_Small_One

void Hill_Small_One(){

    glPushMatrix();

    glTranslatef(0,160,0);

    hill_small();

    glPopMatrix();



}


void Hill_Right_Bottom(){

    glPushMatrix();

    glTranslatef(430,300,0);

    hill_RightBottom();

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

    planePosition();

    Hill_Right_Bottom();

    Hill_Small_One();

    cloud_three();

    cloud_four();

    cloud_one();

    cloud_two();

    cloud_five();

    cloud_six();

    beach();

    Boat();
    lightHouse();

	glFlush();

}



///Speed & Movement

void move_right(){

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
