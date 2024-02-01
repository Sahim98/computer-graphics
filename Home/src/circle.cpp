#include <graphics.h>

int main()
{
    /*
	int gd = DETECT, gm;
	initgraph(&gd, &gm, " ");
	int left=100,top=100,right=300,bottom=200,x=(left+right)/2, y=(top+bottom)/2,radius=30;

    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(left, top, right, bottom);
    floodfill(x,y,WHITE);

    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(x, y, radius);
    floodfill(x,y,RED) ;
    */

    int x =300, y=300 ;

    initwindow(500,500);
    arc(x,y,0,170,100);

    line(x-100,y,x-10,y);
    //putpixel(x-10,y,RED) ;
    bar(x-10,y,x,y);

    line(x+10,y,x+100,y);
    putpixel(x+10,y,BLUE);
    arc(x,y,180,350,100);







    getch();
	closegraph();

	return 0;
}
