
#include <conio.h>
#include <dos.h>
#include <graphics.h>

// Driver code
int main()
{
	int gd = DETECT, gm, i, a;

	// Path of the program
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	int x=300,y=300,r = 100;

	setcolor(RED);

	while (true) {
        cleardevice();
            if (GetAsyncKeyState(VK_RIGHT)) {
                //x1 += 10;
               // x2 += 10;

               x += 10;
            }
            else if (GetAsyncKeyState(VK_LEFT)) {
                //x1 -= 10;
               // x2 -= 10;
               x-=10;
            }
            circle(x,y,r);
            delay(10);
    }

    _getch();

	closegraph();
}
