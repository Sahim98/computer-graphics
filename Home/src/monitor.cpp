#include<graphics.h>


int main(){
int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
    setbkcolor(WHITE);

    setcolor(BLACK);

    cleardevice();


    rectangle(200,200,400,350);
    setcolor(WHITE);// top left
    setfillstyle(SOLID_FILL,WHITE);
    circle(200,200,10) ;
    floodfill(200,200,WHITE);

    setcolor(BLACK);
    arc(210,210,90,180,10);


    setcolor(WHITE);//bottom left
    circle(200,350,10) ;
    floodfill(200,350,WHITE);

    setcolor(BLACK);
    arc(210,340,180,270,10);

    setcolor(WHITE);//top right
    circle(400,200,10) ;
    floodfill(400,200,WHITE);

    setcolor(BLACK);
    arc(390,210,10,110,10);

    setcolor(WHITE);//bottom right
    circle(400,350,10) ;
    floodfill(400,350,WHITE);

    setcolor(BLACK);
    arc(390,340,270,360,10);

    /* --------------- display--------------*/

    rectangle(220,220,380,320);
    setcolor(WHITE);// top left
    setfillstyle(SOLID_FILL,WHITE);
    circle(200,200,10) ;
    floodfill(200,200,WHITE);
    circle(250,310,10);

    setcolor(BLACK);//top left
    circle(300,335,10);
    arc(210,210,90,180,10);

    rectangle(270,350,330,370);

    rectangle(250,370,350,380);

getch();
closegraph();
}
