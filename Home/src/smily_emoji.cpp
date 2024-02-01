#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

int main(){
    initwindow(400,600) ;
    setcolor(YELLOW) ;
    setbkcolor(WHITE);
    cleardevice();


    circle(200,300,60);
    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(200,300,YELLOW);

    setcolor(BLACK);
  //  ellipse(200,300,30,300,20,40);
  setfillstyle(SOLID_FILL,BLACK);
    fillellipse(225,275,5,10);
    setlinestyle(SOLID_FILL,BLACK,4);
    arc(185,280,20,160,10);

    arc(200,300,190,310,20);


    getch();
	closegraph();


}
