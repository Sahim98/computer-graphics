#include <graphics.h>


int main(){
    initwindow(600,600) ;
    setcolor(BLACK) ;
    setbkcolor(WHITE);
    cleardevice();

    //setlinestyle(SOLID_FILL,BLACK,5);


    circle(200,300,50);

    line(200,300,250,200);// sitting stand support
    line(200,300,280,300);//base

    line(240,190,300,280);//sitting stand
    circle(300,300,20);//paddle circle
    line(320,290,355,200);//paddle to front cycle support


    line(220,190,260,190);

    circle(400,300,50);//front cycle

    line(400,300,350,190);//cycle support

    line(350,190,360,180);


    getch();
	closegraph();


}


