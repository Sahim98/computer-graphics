#include <graphics.h>
#include <conio.h>

void drawCircle(int x, int y, int radius) {
    setlinestyle(SOLID_LINE,RED,4);
    setcolor(RED);
    circle(x, y, radius);

}

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int x = getmaxx() / 2; // Initial x-coordinate at the center of the screen
    int y = getmaxy() / 2; // Initial y-coordinate at the center of the screen

    int radius = 100;
    char ch;

    while (1) {
        drawCircle(x, y, radius);

        ch = getch(); // Get a keypress


        cleardevice();

        switch (ch) {
            case 'l':
                x -= 15; // Move left
                break;
            case 'r':
                x += 15; // Move right
                break;
            case 'u':
                y -= 15; // Move up
                break;
            case 'd':
                y += 15; // Move down
                break;
            case 'o':
                x = getmaxx() / 2;
                y =  getmaxy() / 2;
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
