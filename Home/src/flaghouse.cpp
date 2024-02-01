#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    setcolor(WHITE);
    rectangle(50, 30, 550, 400);
    setfillstyle(1, WHITE);
    floodfill(51, 31, WHITE);

    // content

    // MAIN_RECTANGLE
    setcolor(BLACK);
    rectangle(90, 200, 450, 350);
    setfillstyle(1, BLACK);
    floodfill(91, 201, BLACK);

    // RECTANGLE_CONTENT

    setcolor(WHITE);
    rectangle(110, 220, 145, 235);
    setfillstyle(1, WHITE);
    floodfill(121, 221, WHITE);

    setcolor(WHITE);
    rectangle(110, 255, 145, 330);
    setfillstyle(1, WHITE);
    floodfill(121, 261, WHITE);

    // second
    setcolor(WHITE);
    rectangle(170, 220, 190, 330);
    setfillstyle(1, WHITE);
    floodfill(171, 221, WHITE);

    // THIRD

    setcolor(WHITE);
    rectangle(215, 220, 235, 235);
    setfillstyle(1, WHITE);
    floodfill(216, 221, WHITE);

    setcolor(WHITE);
    rectangle(215, 255, 235, 330);
    setfillstyle(1, WHITE);
    floodfill(216, 261, WHITE);

    // fOURTH
    setcolor(WHITE);
    rectangle(260, 220, 280, 330);
    setfillstyle(1, WHITE);
    floodfill(261, 221, WHITE);

    // FIFTH
    setcolor(WHITE);
    rectangle(305, 220, 325, 235);
    setfillstyle(1, WHITE);
    floodfill(306, 221, WHITE);

    setcolor(WHITE);
    rectangle(305, 255, 325, 330);
    setfillstyle(1, WHITE);
    floodfill(306, 261, WHITE);

    // SIXTH
    setcolor(WHITE);
    rectangle(350, 220, 370, 330);
    setfillstyle(1, WHITE);
    floodfill(351, 221, WHITE);

    // SEVENTH
    setcolor(WHITE);
    rectangle(395, 220, 430, 235);
    setfillstyle(1, WHITE);
    floodfill(396, 221, WHITE);

    setcolor(WHITE);
    rectangle(395, 255, 430, 330);
    setfillstyle(1, WHITE);
    floodfill(396, 261, WHITE);

    // TOPDESIGN
    setcolor(BLACK);
    rectangle(130, 160, 410, 200);
    setfillstyle(1, BLACK);
    floodfill(131, 161, BLACK);

    setcolor(WHITE);
    rectangle(150, 180, 390, 200);
    setfillstyle(1, WHITE);
    floodfill(151, 181, WHITE);

    // topofTOP
    setcolor(BLACK);
    // rectangle(160,160,270,50);
    line(160, 160, 260, 90);
    line(380, 160, 280, 90);
    line(160, 160, 380, 160);
    // p
    line(260, 90, 260, 35);
    line(260, 35, 330, 35);
    line(330, 35, 330, 70);
    line(330, 70, 280, 70);
    line(280, 70, 280, 90);

    setfillstyle(1, BLACK);
    floodfill(270, 100, BLACK);

    // p er rectangle
    setcolor(WHITE);
    rectangle(280, 43, 310, 60);
    setfillstyle(1, WHITE);
    floodfill(286, 48, WHITE);

    // White triangle

    setcolor(WHITE);
    line(190, 160, 260, 110);
    line(350, 160, 260, 110);
    line(190, 160, 350, 160);
    setfillstyle(1, WHITE);
    floodfill(250, 120, WHITE);

    getch();
    return 0;
}
