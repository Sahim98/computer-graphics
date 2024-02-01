#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

int main(){
    initwindow(600,600) ;
    setcolor(BLACK) ;
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(SOLID_LINE,BLACK,4);

    line(200,300,200,330);
    line(300,300,300,330);
    line(200,330,300,330);

    line(200,300,230,300);
    line(270,300,300,300);

    line(240,310,260,310);

    line(240,310,230,300);
    line(260,310,270,300);

    line(200,300,230,270);
    line(300,300,270,270);

    line(230,270,245,270) ;
    line(255,270,270,270);
    line(250,250,250,300);

    line(250,300,240,290);
    line(250,300,260,290);




    getch();
	closegraph();


}


