#include <graphics.h>

int main()
{
    initwindow(700, 700);

    setbkcolor(WHITE);
    cleardevice();

    setcolor(BLACK);

    setlinestyle(SOLID_LINE,BLACK,3);

    //eye shape
    arc(300,300,30,150,100);
    arc(300,200,210, 330,100);

    //isis

    circle(300,250,25);

    //line

    line(300,250,200,350);
    line(300,250,400,150);


    getch();
    closegraph();
}