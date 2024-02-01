#include <graphics.h>

int main(){
    initwindow(600,600) ;
    setcolor(YELLOW) ;
    setbkcolor(WHITE);
    cleardevice();


    circle(200,300,100);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(200,300,YELLOW);

    setcolor(BLACK);

    fillellipse(160,260,12,18);//left eye
    arc(132,260,10,60,40);

    fillellipse(240,260,12,18);//right eye
    arc(270,260,130,170,40);

    setfillstyle(SOLID_FILL,BLACK);

    circle(162,260,10);

    floodfill(162,260,BLACK);

    circle(238,260,10);

    floodfill(238,260,BLACK);

    arc(200,350,40,140,50);//mouth

    arc(200,350,230,310,15);

    getch();
	closegraph();

}

