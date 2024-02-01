#include <graphics.h>
#include <conio.h>

void drawCircle(int x, int y, int radius) {
    setlinestyle(SOLID_LINE,RED,4);
    setcolor(RED);
    circle(x, y, radius);

}

void drawRectangle(int left,int top,int right,int down)
{
     setlinestyle(SOLID_LINE,RED,4);
    setcolor(RED);
    
    rectangle(left,top,right,down);
}

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x = getmaxx() / 2; // Initial x-coordinate at the center of the screen
    int y = getmaxy() / 2; // Initial y-coordinate at the center of the screen

    int r = 100;

    int left = 100, right = 200 ,top = 100 , down = 150 ;

    rectangle(left,top,right,down);
    char ch;

    while (1) {
        drawCircle(x, y, r);
        drawRectangle(left,top,right,down);

        ch = getch(); // Get a keypress

        cleardevice();

        switch (ch) {
            case 'i':
                r += 15; // Move left
                top -=15;
                down +=15 ;
                right +=15;
                break;
            
            case 'd':
                top +=15;
                down -=15 ;
                right -=15;
                r -= 15; // Move down
                break;
            case 27: // ASCII value for Escape key
                closegraph();
                return 0;
        }
    }

    getch();
    closegraph();

    return 0;
}
