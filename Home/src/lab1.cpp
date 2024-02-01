#include <graphics.h>

int main(void)
{

    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "");
    // int x = getmaxx()/2,y = getmaxy()/2;

    int left = 200, right, top, bottom;

    int x = 200, y = 300, x1 = 500, y1 = 300, r1 = 50, r2 = 40;

    // tire
    circle(x, y, r1);
    circle(x1, y1, r1);
    circle(x, y, r2);
    circle(x1, y1, r2);

    // lower part
    line(x + r1, y, x1 - r1, y);
    line(x - r1, y, x - r1 - 50, y);
    line(x1 + r1, y, x1 + r1 + 50, y);

    // front part
    line(x - r1 - 50, y, x - r1 - 70, y - 70);
    line(x - r1 - 70, y - 70, x - r1 - 40, y - 200);

    // door

    line(x - r1 - 30, y - 20, x - r1 - 50, y - 80);
    line(x - r1 - 50, y - 80, x - r1, y - 160);
    line(x - r1, y - 160, x, y - 160);
    line(x, y - 160, x, y - r1 - 10); // circle join

    arc(x, y, 90, 160, r1 + 10);
    line(x - r1 - 50, y - 20, x - r1, y - 20);
    // window border
    line(x - r1 - 50, y - 80, x - r1 - 40, y - 70);
    line(x - r1 - 40, y - 70, x, y - 80);

    // strip
    line(x, y - 80, x1 + r1 + 50, y - 80);
    line(x, y - 70, x1 + r1 + 50, y - 70);

    line(x1 + r1 + 50, y1, x1 + r1 + 50, y - 200);

    // roof
    line(x1 + r1 + 50, y - 200, x - r1 - 50, y - 200);
    line(x1 + r1 + 50, y - 190, x - r1 - 50, y - 190);

    // window
    rectangle(x + 10, y - 190, x + 90, y - 130);
    rectangle(x + 95, y - 190, x + 175, y - 130);
    rectangle(x + 180, y - 190, x + 260, y - 130);
    rectangle(x + 265, y - 190, x + 400, y - 130);
    line(x + 390, y - 130,x+390,y-190);

    line(x + 10, y - 130, x + 400, y - 130);
    //    line(x+10,y-120,x+r1+50)

    getch();
    closegraph();
}
