#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	int left=10,top=20,right=600,bottom=500;
	int x=300,y=200,r=100;

	//background rectangle
	setcolor(WHITE);
    rectangle(left, top, right, bottom);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(101,51,WHITE);

    setcolor(BLACK);
    setlinestyle(0,0,4);
    circle(x,y,r);

    circle(x+40,y-25,20);
    circle(x-40,y-25,20);

    circle(x+40,y-25,5);
    circle(x-40,y-25,5);
    setfillstyle(1,BLACK);
    floodfill(x+40,y-25,BLACK);
    floodfill(x-40,y-25,BLACK);

    line(x-15,y+r/2+5,x+15,y+r/2+5);

    //arc
    arc(x-40+20,y-25,100,140,50);

    arc(x+40-20,y-20,60,100,55);



getch();
closegraph();
}
