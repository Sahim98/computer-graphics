#include <graphics.h>

int main()
{
    initwindow(700, 700);

    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    rectangle(300,300,320,400);
    floodfill(310,305,BLACK);

    arc(300,450,90,180,50);
    arc(320,450,0,90,50);
    line(250,450,370,450);

    floodfill(320,440,BLACK);

   // line(260,450,240,550);

    for(int i = 260, j = 450;i >=240 ;i-=5,j+=25)
    {
        circle(i,j,5);
    }

    for(int i = 310, j = 450;j <=550 ;j+=25)
    {
        circle(i,j,5);
    }

     for(int i = 360, j = 450;i <=380 ;i+=5,j+=25)
    {
        circle(i,j,5);
    }
    

    

    getch();
    closegraph();
}