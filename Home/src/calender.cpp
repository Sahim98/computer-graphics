#include <graphics.h>


int main()
{
    initwindow(600, 700);
    setcolor(BLACK);
    setbkcolor(WHITE);
    cleardevice();

   // setlinestyle(SOLID_LINE, BLACK, 4);

    int x, y, r =50, left = 200, top = 200, bottom = 350, right = 400;

    // upper rectangle
    rectangle(left,top-50,right,top);
    rectangle(left+50,top-65,left+60,top-35);
    rectangle(right-60,top-65,right-50,top-35);
    setcolor(WHITE);
    line(left+50,top-50,left+60,top-50);
    line(right-60,top-50,right-50,top-50);
    setcolor(BLACK);
    
    //lower triangle
    rectangle(left, top, right, bottom);
    // grid
    int shift = 25;
    rectangle(left + shift, top + shift, right - shift, bottom - shift);

    for (int i = left + shift; i <= right - shift; i += shift)
        line(i, top + shift, i, bottom - shift);

    for (int i = top + shift; i <= bottom - shift; i += shift)
        line(left + shift, i, right - shift, i);

    setcolor(RED);
    circle(right,bottom,r);
    floodfill(right,bottom,RED);

    setcolor(BLACK);
    circle(right,bottom,r-10);
    floodfill(right,bottom,WHITE);

    line(right,bottom-25,right,bottom+25);
    line(right-25,bottom,right+25,bottom);

    setcolor(WHITE);
    setlinestyle(SOLID_LINE,WHITE,5);
    circle(right,bottom,r);

    getch();
    closegraph();
}
