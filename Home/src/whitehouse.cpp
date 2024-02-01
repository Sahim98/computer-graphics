#include <graphics.h>

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	setcolor(WHITE);
    rectangle(50,30,550,400);
    setfillstyle(1,WHITE);
    floodfill(55,31,WHITE);
	setcolor(BLACK);
	line(140,150,350,150);
	line(140,150,250,50);
	line(250,50,350,150);
	//setcolor(0);
	setfillstyle(1,BLACK);
    floodfill(240,60,BLACK);


    rectangle(140,151,350,152);
    setfillstyle(1,BLACK);
    floodfill(140,152,BLACK);


    rectangle(145,170,345,180);
    setfillstyle(1,BLACK);
    floodfill(146,175,BLACK);

    //MIDDLE
    rectangle(155,190,190,290);
    setfillstyle(1,BLACK);
    floodfill(156,196,BLACK);


    rectangle(227,190,262,290);
    setfillstyle(1,BLACK);
    floodfill(228,196,BLACK);


    rectangle(300,190,335,290);
    setfillstyle(1,BLACK);
    floodfill(301,196,BLACK);



    //LAST TWO
    rectangle(145,300,345,310);
    setfillstyle(1,BLACK);
    floodfill(146,302,BLACK);

    rectangle(140,320,350,330);
    setfillstyle(1,BLACK);
    floodfill(141,322,BLACK);



	getch();
    return 0;
}



