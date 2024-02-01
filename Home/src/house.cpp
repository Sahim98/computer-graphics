#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

int main(){
    initwindow(600,600) ;
    setcolor(BLACK) ;
    setbkcolor(WHITE);
    cleardevice();


    line(80,200,150,150);//roof1
    line(80,210,150,160);//
    line(80,200,80,210);//roof join
    line(90,200,90,280);//base

    rectangle(140,200,160,220);//window1
    line(150,200,150,220);
    line(140,210,160,210);

    rectangle(100,220,120,240);//window2
    line(100,230,120,230);
    line(110,220,110,240);

    rectangle(180,220,200,240);//window3
    line(180,230,200,230);
    line(190,220,190,240);



    line(150,150,220,200);//roof2
    line(150,160,220,210);//roof
    line(220,200,220,210);//roof join
    line(210,200,210,280);//base

     //sinkhole
     line(180,150,180,173);
     line(200,150,200,185);

     rectangle(180,145,200,150);

    line(90,280,210,280);//floor

    line(125,225,125,280);//door
    line(175,225,175,280);
    line(125,225,175,225);

    circle(135,250,5);//door lock


    getch();
	closegraph();


}

