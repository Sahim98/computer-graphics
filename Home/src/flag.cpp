#include <graphics.h>

int main()
{

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


    getch();
	closegraph();

	return 0;
}
