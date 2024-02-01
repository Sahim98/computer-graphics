#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

int main(){
    initwindow(600,600) ;
    setcolor(YELLOW) ;
    setbkcolor(WHITE);

    cleardevice();


    circle(200,300,50);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(200,300,YELLOW);

    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);

    circle(175,275,25 );
    line(180,275,190,275);

    arc(200,280,55,115,25);

    circle(230,275,25 );
    line(225,275,235,275);
   // fillellipse(225,275,5,10);
  //  arc(185,280,20,160,10);

    arc(200,310,200,330,20);


    getch();
	closegraph();


}

