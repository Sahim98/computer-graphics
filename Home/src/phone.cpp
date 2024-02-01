#include <graphics.h>
#include <stdio.h>

int main()
{
    initwindow(700, 600);
    setcolor(BLACK);

    setbkcolor(WHITE);
    cleardevice();

    setfillstyle(SOLID_FILL, BLACK);
    rectangle(100, 100, 250, 330); // phone structure
    floodfill(101, 101, BLACK);

    setfillstyle(SOLID_FILL, BLACK);
    rectangle(230, 80, 240, 100); // antena
    floodfill(235, 90, BLACK);

    arc(230, 85, 120, 220, 15);
    arc(220, 85, 120, 220, 15);
    arc(250, 85, 310, 60, 15);
    arc(240, 85, 310, 60, 15);

    setcolor(WHITE);

    setfillstyle(SOLID_FILL, WHITE);
    rectangle(110, 110, 240, 200); // display
    floodfill(115, 115, WHITE);

    int left = 110, top = 210, right = 240, bottom = 220;

    printf("%d \n",(right-left)/3);

    for (int i = left; i <= right; i += 55)
    {
        rectangle(i, top, i + 20, top + 10);
        floodfill(i + 2, top + 2, WHITE);
    }

    top += 30;

    for (int i = left; i <= right; i += 55)
    {
          printf("%d ",i);
        rectangle(i, top, i + 20, top + 10);
        floodfill(i + 2, top + 2, WHITE);
    }

    top += 30;

    for (int i = left; i <= right; i += 55)
    {
        rectangle(i, top, i + 20, top + 10);
        floodfill(i + 2, top + 2, WHITE);
    }

    top+=30;

     for(int i = left ; i<= right;i+=55)
     {
        rectangle(i,top,i+20,top+10);
        floodfill(i+2,top+2,WHITE);
     }
    getch();
    closegraph();
}
