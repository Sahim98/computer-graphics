#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	int left=100,top=80,right=500,bottom=380;

	//rectangle
	setcolor(WHITE);
    rectangle(left, top, right, bottom);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(101,81,WHITE);

    int x,y,l,h,r,n;
    x=150; y= 100;
    l=150; h=50; r=60; n=40;
    int b=2;


    setcolor(BLACK);
    //setlinestyle(0, 0, 5);
    setfillstyle(SOLID_FILL, BLACK);
    rectangle(x, y, x+l, y+20);
    rectangle(x+l, y, x+l+20, y+h);
    floodfill(x+2,y+2,BLACK);
    floodfill(x+l+2,y+2,BLACK);

    arc(x+l+10, y+h+r, 0, 180, r);
    rectangle(x+l-r+10, y+h+r, x+l+r+10, y+h+r+20);
    floodfill(x+l+5,y+h+5,BLACK);
    floodfill(x+l-r+15,y+h+r+5,BLACK);


    //first row
    rectangle(x+l-r+10, y+h+r+35, x+l-r+20, y+h+r+60);
    floodfill(x+l-r+11,y+h+r+36,BLACK);
    rectangle(x+l-r+46, y+h+r+35, x+l-r+56, y+h+r+60);
    floodfill(x+l-r+47,y+h+r+36,BLACK);
    rectangle(x+l-r+82, y+h+r+35, x+l-r+92, y+h+r+60);
    floodfill(x+l-r+83,y+h+r+36,BLACK);
    rectangle(x+l-r+118, y+h+r+35, x+l-r+128, y+h+r+60);
    floodfill(x+l-r+119,y+h+r+36,BLACK);
    //2nd row
    rectangle(x+l-r+10, y+h+r+70, x+l-r+20, y+h+r+95);
    floodfill(x+l-r+11,y+h+r+71,BLACK);
    rectangle(x+l-r+46, y+h+r+70, x+l-r+56, y+h+r+95);
    floodfill(x+l-r+47,y+h+r+71,BLACK);
    rectangle(x+l-r+82, y+h+r+70, x+l-r+92, y+h+r+95);
    floodfill(x+l-r+83,y+h+r+71,BLACK);
    rectangle(x+l-r+118, y+h+r+70, x+l-r+128, y+h+r+95);
    floodfill(x+l-r+119,y+h+r+71,BLACK);
    //3rd row
    rectangle(x+l-r+10, y+h+r+105, x+l-r+20, y+h+r+130);
    floodfill(x+l-r+11,y+h+r+106,BLACK);
    rectangle(x+l-r+46, y+h+r+105, x+l-r+56, y+h+r+130);
    floodfill(x+l-r+47,y+h+r+106,BLACK);
    rectangle(x+l-r+82, y+h+r+105, x+l-r+92, y+h+r+130);
    floodfill(x+l-r+83,y+h+r+106,BLACK);
    rectangle(x+l-r+118, y+h+r+105, x+l-r+128, y+h+r+130);
    floodfill(x+l-r+119,y+h+r+106,BLACK);


    getch();
	closegraph();
}
