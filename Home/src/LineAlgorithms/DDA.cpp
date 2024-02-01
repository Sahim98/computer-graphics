#include <bits/stdc++.h>
#include <graphics.h>

int main()
{
    int x1, y1, x2, y2;
    float m, x, y;

    int gdriver = DETECT, gmode, errorcode;
    initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
    printf("Using DDA Algorithm");

    x1 = 200; // Reverse the starting point
    y1 = 200;
    x2 = 100; // Reverse the ending point
    y2 = 300;

    m = (y2 - y1) / (x2 - x1);

    if (m <= 1)
    {
        x = x1;
        y = y1;

        while (x >= x2)
        {                             // Reverse the loop condition
            putpixel(x, round(y), 3); // Use rounding for more accurate pixel placement
            x = x - 1;                // Reverse the x increment
            y = y - m;                // Reverse the y increment
        }
    }
    else
    {
        x = x1;
        y = y1;

        while (y <= y2)
        {
            putpixel(round(x), y, 3); // Use rounding for more accurate pixel placement
            x = x - (1 / m);          // Reverse the x increment
            y = y + 1;                // Keep the y increment as is
        }
    }

    getch();
    closegraph();
    return 0;
}