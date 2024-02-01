#include <graphics.h>

void rombus(int x, int y, int color)
{
    setlinestyle(SOLID_LINE, color, 4);
    setfillstyle(SOLID_FILL, color);
    int poly[] = {x, y, x + 25, y + 25, x + 50, y, x + 25, y - 25};
    fillpoly(4, poly);
}

int main()
{
    initwindow(600, 700);
    setcolor(BLACK);
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(SOLID_LINE, BLACK, 4);

    int x = 300, y = 300, r = 200;

    // circle(x,y,r);
    arc(x, y, 0, 170, r);
    line(x - 200, y, x - 50, y);
    rombus(x - 50, y, BLACK);
    rombus(x, y - 50, RED);
    rombus(x + 50, y, BLACK);
    line(x + 100, y, x + 200, y);
    rombus(x, y + 50, BLACK);

    arc(x, y, 180, 350, r);

    getch();
    closegraph();
}
