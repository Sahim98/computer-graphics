#include <graphics.h>

int main()
{
    initwindow(700, 700);

    setbkcolor(WHITE);
    cleardevice();

    setcolor(BLACK);

    // upper portion
    arc(200, 200, 0, 180, 50);
    line(150, 200, 250, 200);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(200, 195, BLACK);
    rectangle(150, 200, 250, 240);
    floodfill(160, 205, BLACK);

    // lower portion

    arc(200, 300, 180, 360, 50);
    line(150, 300, 250, 300);
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(205, 310, BLACK);
    rectangle(150, 300, 250, 260);
    floodfill(160, 290, BLACK);

    setlinestyle(SOLID_LINE, BLACK, 5);
    arc(200, 310, 180, 360, 70);

    line(200, 380, 200, 420);

    rectangle(180, 420, 220, 430);
    floodfill(190, 425, BLACK);

    getch();
    closegraph();
}