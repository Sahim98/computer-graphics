
#include <graphics.h>
int main()
{
    int x = 200, y = 200, ch;

    int ax1 = 10, ay1 = 10, bx1 = 30, by1 = 10, cx1 = 20, cy1 = 20;

    initwindow(600, 600);

    int poly[] = {ax1 + x, ay1 + y, bx1 + x, by1 + y, cx1 + x, cy1 + y};
    fillpoly(3, poly);

    while (1)
    {
        int poly[] = {ax1 + x, ay1 + y, bx1 + x, by1 + y, cx1 + x, cy1 + y};
        fillpoly(3, poly);
        setcolor(RED);
        setlinestyle(SOLID_LINE, RED, 4);
        outtextxy(400, 400, "Pres Esc to Exit...");
        if (kbhit())
        {
            ch = getch();
            if (ch == 'i') // move upward
            {
               // ax1 -= 10;
                bx1 *= 2;
                cy1 *= 2;
            }

            if (ch == 'd') // move left
            {
               // ax1 += 10;
                bx1 /= 2;
                cy1 /= 2;
            }

            if (ch == 27)
                exit(0);
        }

        delay(50);
        cleardevice();
    }

    getch();
    closegraph();
}
