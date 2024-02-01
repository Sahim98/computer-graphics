#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	int left=10,top=20,right=600,bottom=500;
	int x=300,y=300,r=30;

	//background rectangle
	setcolor(WHITE);
    rectangle(left, top, right, bottom);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(101,51,WHITE);

   setcolor(BLACK);
   //setlinestyle(0,0,5);
    circle(x-70,y-50,r); //left
    circle(x+70,y-50,r);
    line(x-70-r-30,y-50,x+70+r+30,y-50);

    //left circle modeling
    line(x-70-30,y-50-r,x+25,y-50-r); //on......................
    line(x-70-30,y-50-r,x-70-30-60,y-150); //baka

    line(x-70-30-60,y-150,x-10,y-150); //hori

    line(x+25,y-50-r,x+25,y-180); //ver

    line(x+45,y-180,x,y-180);
    line(x,y-180,x-10,y-150);

    //front
    line(x+25,y-150,x+80,y-150);
    line(x+80,y-150,x+90,y-120); //kaz ase

    line(x+90,y-120,x+50,y-120);
    line(x+50,y-120,x+40,y-150);

    line(x+90,y-120,x+110,y-120+40);
    line(x+110,y-120+40,x+70+r+10,y-50);


    //middle
    line(x-70-30+25,y-50-r,x-70-30+10,y-50-r-30);

    line(x-70-30+25+25,y-50-r,x-70-30+10+25,y-50-r-30);

    line(x-70-30+25+25+25,y-50-r,x-70-30+25+25+10,y-50-r-30);





getch();
closegraph();
}
