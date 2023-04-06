#include<iostream>
#include<graphics.h>
#include<cmath>
#define PI 3.1415
using namespace std;

int main()
{
     int d=0,m;
    int x,y;
    int gd=DETECT,gm;
    int i,walk=0;
    initgraph(&gm,&gm," ");
    initwindow(700,700);



    int option;

 //name
    line(50,50,50,100);
    line(50,50,60,70);
    line(60,70,70,50);
    line(70,50,70,100);

    line(80,50,80,100);
    line(80,50,100,50);
    line(80,100,100,100);
    line(80,75,90,75);

    ellipse(110,75,5,330,10,25);
    line(119,85,130,85);
    line(130,85,130,100);

    line(140,50,140,100);
    line(170,50,170,100);
    line(170,75,140,75);
    line(180,50,180,100);
    line(180,100,200,100);

    line(230,50,205,100);
    line(230,50,250,100);
    line(215,80,240,80);

    line(290,50,270,100);
    line(290,50,310,100);
    line(279,80,301,80);

    line(320,50,320,100);
    line(340,50,320,75);
    line(320,75,340,100);

    line(350,50,390,50);
    line(370,50,370,100);

    line(400,50,400,100);
    line(400,100,420,100);
    line(400,50,420,50);
    line(400,75,410,75);

    line(433,50,433,100);
    ellipse(431,63,270,441,20,15);
    line(432,73,450,100);

    line(470,50,470,100);
    line(470,50,490,100);
    line(490,50,490,100);


 ellipse(515,90,180,330,15,10);
 line(500,50,500,90);
 line(529,50,529,92);

 line(536,50,535,100);
 ellipse(533,63,270,441,20,15);

 ellipse(575,90,180,330,15,10);
 line(560,50,560,90);
 line(589,50,589,93);

 //id
 line(595,48,595,100);
 ellipse(592,63,270,441,20,15);
 line(595,73,610,100);

    ellipse(50,150,50,340,10,25);
    line(70,130,90,130);
    line(70,130,70,150);
    line(70,150,90,150);
    line(90,150,90,170);
    line(70,170,90,170);

    line(100,130,100,170);
    line(100,130,120,130);
    line(100,170,120,170);
    line(100,150,110,150);

     line(130,130,150,130);
     line(150,130,150,150);
     line(150,150,130,150);
     line(130,150,130,170);
     line(130,170,150,170);

     ellipse(170,150,5,360,10,20);
     ellipse(195,150,5,360,10,20);
     line(220,130,220,170);
     line(210,170,230,170);
     line(220,130,210,140);
     ellipse(240,150,5,360,10,20);
     line(270,130,270,170);
     line(260,170,280,170);
     line(270,130,260,140);
     ellipse(290,140,5,360,7,12);
     ellipse(290,150,250,420,10,20);
     line(310,130,330,130);
     line(330,130,330,150);
     line(330,150,310,150);
     line(310,150,310,170);
      line(310,170,330,170);

     line(340,130,360,130);
     line(360,130,360,150);
      line(360,150,340,150);
     line(360,150,360,170);
      line(360,170,340,170);

     line(370,130,400,130);
      line(400,130,390,170);



    // display menu



    std::cout << "Choose a shape to draw:" << std::endl;
    std::cout << "1. Home" << std::endl;
    std::cout << "2. Emoji" << std::endl;
    std::cout << "3. Flower" << std::endl;
    std::cout << "4.Tower " << std::endl;
    std::cout << "5. Rainbow" << std::endl;
      std::cout << "6.Shipe " << std::endl;
      std::cout << "7.Star " << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> option;


    switch (option)
    {
    case 1:
   setcolor(WHITE);
    rectangle(150,320,250,420);
    rectangle(250,320,420,420);
    rectangle(320,370,360,420);

    line(150,320,190,250);
    line(250,320,190,250);
    line(190,250,360,250);
    line(360,250,420,320);
    setfillstyle(1,BROWN);
    floodfill(152,322,WHITE);
    floodfill(252,322,WHITE);
    setfillstyle(1,BLUE);
    floodfill(322,372,WHITE);

    setfillstyle(1,GREEN);
    floodfill(191,300,WHITE);
    floodfill(251,300,WHITE);



        break;

    case 2:
            setcolor(RED);
    circle(400,310,100);
    setfillstyle(1,YELLOW);
    floodfill(415,315,RED);

    setcolor(RED);
    ellipse(400,340,180,360,55,50);
    line(345,340,455,340);
    setfillstyle(1,RED);
    floodfill(346,341,RED);

     setcolor(WHITE);
     circle(440,270,20);
     setfillstyle(1,WHITE);
     floodfill(441,271,WHITE);

     setcolor(WHITE);
     circle(360,270,20);
     setfillstyle(1,WHITE);
     floodfill(365,275,WHITE);

      setcolor(BLACK);
     circle(360,270,10);
     setfillstyle(1,BLACK);
     floodfill(361,271,BLACK);

      setcolor(BLACK);
     circle(440,270,10);
     setfillstyle(1,BLACK);
     floodfill(441,271,BLACK);



        break;

    case 3:
         for(i=0;i<=100;i++)
    {
        circle(319,419-i,20+i);
        circle(319,419+i,20+i);
        circle(299-i,439,20+i);
        circle(339+i,439,20+i);
    }

        break;

    case 4:
        line(200,200,150,400);
    line(200,200,250,400);
    line(200,240,150,400);
    line(200,240,250,400);
    line(200,280,150,400);
    line(200,280,250,400);
    line(200,320,150,400);
    line(200,320,250,400);
    line(200,360,150,400);
    line(200,360,250,400);
    line(150,400,250,400);

     setfillstyle(SOLID_FILL, YELLOW);
        floodfill(201, 209, WHITE);

         setfillstyle(SOLID_FILL, RED);
        floodfill(201, 249, WHITE);

         setfillstyle(SOLID_FILL, BLUE);
        floodfill(201, 289, WHITE);

         setfillstyle(SOLID_FILL, GREEN);
        floodfill(201, 323, WHITE);

         setfillstyle(SOLID_FILL, CYAN);
        floodfill(201, 383, WHITE);



        break;

      case 5:
           x=getmaxcolor()/2;
    y=getmaxcolor()/2;
    for(i=40;i<200;i++)
    {
        delay(100);
        setcolor(i/10);
        arc(250,400,0,180,i-10);
    }


         break;

      case 6:
              setcolor(WHITE);
    setfillstyle(1,CYAN);
    floodfill(50,50,15);

    line(150,400,500,400);
    line(150,400,170,470);
    line(500,400,480,470);
    line(170,470,480,470);
    setfillstyle(1,BLACK);
    floodfill(155,401,WHITE);


    line(270,400,270,330);
    line(500,400,500,350);
    line(270,330,500,350);
    setfillstyle(1,DARKGRAY);
    floodfill(271,331,WHITE);

    circle(450,370,15);
    setfillstyle(1,WHITE);
    floodfill(455,371,WHITE);

    circle(350,370,15);
    setfillstyle(1,WHITE);
    floodfill(355,371,WHITE);

    circle(400,370,15);
    setfillstyle(1,WHITE);
    floodfill(405,371,WHITE);

    line(390,340,390,300);
     line(410,343,410,300);
      line(390,300,410,300);
      setfillstyle(1,BLACK);
    floodfill(395,301,WHITE);

    line(420,345,420,270);
     line(440,345,440,270);
      line(420,270,440,270);
      floodfill(421,271,WHITE);


    line(150,400,150,360);
    line(300,400,300,360);
    line(150,360,300,360);

    line(155,400,155,365);
    line(295,400,295,365);
    line(155,365,295,365);
    setfillstyle(1,BLACK);
    floodfill(155,361,WHITE);
    floodfill(295,361,WHITE);

     break;

      case 7:
              setcolor(WHITE);


             line(300,285,280,340);
			line(300,285,320,340);
			line(220,340,280,340);
			line(320,340,380,340);
			line(260,375,220,340);
			line(260,375,245,430);
			line(245,430,300,390);
			line(355,430,300,390);
			line(355,430,340,375);
			line(340,375,380,340);
			setfillstyle(1,YELLOW);
    floodfill(351,356,WHITE);



  break;
   case 8:
          setcolor(WHITE);
  circle(150,390,15);
  setfillstyle(1,GREEN);
  floodfill(155,395,WHITE);

  circle(200,390,15);
  setfillstyle(1,GREEN);
  floodfill(205,395,WHITE);

  circle(180,330,15);
  setfillstyle(1,GREEN);
  floodfill(185,335,WHITE);

  circle(370,330,15);
  setfillstyle(1,GREEN);
  floodfill(375,335,WHITE);

  circle(320,390,15);
  setfillstyle(1,GREEN);
  floodfill(325,395,WHITE);

  circle(390,390,15);
  setfillstyle(1,GREEN);
  floodfill(395,395,WHITE);



  circle(290,270,15);
  setfillstyle(1,GREEN);
  floodfill(295,275,WHITE);


   setcolor(GREEN);
  line(175,340,150,375);
  line(176,340,151,375);
  line(177,340,152,375);

  line(182,340,200,375);
  line(181,340,199,375);
  line(180,340,198,375);

  line(375,330,325,390);
  line(374,330,324,390);
 line(373,330,323,390);

 line(390,390,370,330);
line(391,390,371,330);
line(392,390,372,330);

line(290,270,180,330);
line(291,270,181,330);
line(292,270,182,330);

line(290,270,365,330);
line(291,270,366,330);
line(292,270,367,330);

break;



    }

    getch();
    closegraph();
    return 0;
}


