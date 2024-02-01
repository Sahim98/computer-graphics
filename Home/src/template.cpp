#include <graphics.h>

int main(void)
{
	
	int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "");
    int x = getmaxx()/2,y = getmaxy()/2;
	outtext("Using Bresenham's Circle Algorithm");

  

	getch();
	closegraph();
}
