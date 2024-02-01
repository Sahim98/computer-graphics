#include <graphics.h>


int main()
{
    initwindow(600, 700);
    setcolor(BLACK);
    setbkcolor(WHITE);
    cleardevice();

    int x = 300, y = 200,r=50;
    // upper bengine
    setlinestyle(SOLID_LINE,BLACK,3);

    line(x,y,x,y+50);
    circle(x,y+100,r);

    //triangle
    y+=50;
    line(x,y,x-100,y);
    line(x,y,x+100,y);

    line(x-100,y,x,y+125);
    line(x+100,y, x,y+125);



    // lowr bengine

    getch();
    closegraph();
}
