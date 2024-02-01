#include <graphics.h>

int main()
{
    initwindow(700, 700);

    setbkcolor(WHITE);
    cleardevice();

    setcolor(BLACK);
    
   char title[] = "Fly Emarats";
   outtextxy(250, 210, title);

    rectangle(200, 200, 400, 300);//structure
    setcolor(WHITE);
    line(400,200,400,300);
    line(200,200, 200,300);
    setcolor(BLACK);
    outtext("FLY EMARATES");
    

    arc(400, 200, 265, 30, 100);
    // join backwing
    line(400, 200, 485, 150);

    // join circle
    line(150, 200, 200, 200);
    line(150, 300, 200, 300);

    // making wing

    line(300, 250, 430, 350);
    line(230, 250, 400, 350);
    line(430, 350, 400, 350);

    // wing window
    circle(260, 240, 10);
    circle(290, 240, 10);
    circle(320, 240, 10);

    // door
    setcolor(7);

    setfillstyle(SOLID_FILL,7);

    rectangle(340, 220, 360, 260);
    floodfill(342,221,7);

    
     setfillstyle(SOLID_FILL,7);

    rectangle(200, 220, 220, 260);

    floodfill(202,221,7);

    setcolor(BLACK);

    // wing 2
    line(300, 200, 430, 150);
    line(230, 200, 400, 150);
    line(430, 150, 400, 150);

    // making mouth
    arc(150, 250, 80, 180, 50);
    ellipse(150, 270, 128, 280, 80, 30);

    // making window
    arc(100,225,270,30,25);

   



    getch();
    closegraph();
}