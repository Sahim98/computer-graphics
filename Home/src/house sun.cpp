#include <graphics.h>
#include <math.h>

int main()
{
    initwindow(600, 700);
    setcolor(BLACK);
    setbkcolor(WHITE);
    cleardevice();

    int x = 200, y = 200, r = 50, shift = 70;

    int poly[] = {x, y, x + 200, y, x + 100, y - 100};
    fillpoly(3, poly);

    rectangle(x + 25, y, x + 175, y + 150);

    // door
    rectangle(x + 80, y + 100, x + 120, y + 150);
    circle(x + 110, y + 140, 5);

    // windows
    circle(x + 50, y + 50, 20);
    circle(x + 150, y + 50, 20);

    // sun
    circle(x + 250, y - 75, 25);

    x = x + 250, y = y - 75, r = 25;

    for (int i = 0; i < 360; i += 30)
    {
        // Calculate end point of each radiation line
        if((i/30)&1)shift = 50;
        else shift = 80;
        int x1 = x + shift * cos(i * 3.14 / 180);
        int y1 = y + shift * sin(i * 3.14 / 180);
        line(x, y, x1, y1);
    }

    setcolor(14);
    circle(x,y,r+10);
    floodfill(x,y,YELLOW);
    setcolor(15);
    circle(x,y,r+10);
    setcolor(BLACK);
    circle(x,y,r);
    
    getch();
    closegraph();
}
