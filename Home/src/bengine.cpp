#include <graphics.h>

void forward(int x, int y)
{
    line(x, y, x, y - 25);
    line(x, y - 25, x + 25, y - 50);
    line(x + 25, y - 50, x + 50, y - 25);
    line(x + 50, y - 25, x + 50, y);
}

void backward(int x, int y)
{
    line(x, y, x, y + 25);
    line(x, y + 25, x + 25, y + 50);
    line(x + 25, y + 50, x + 50, y + 25);
    line(x + 50, y + 25, x + 50, y);
}

void leg(int x ,int y){
    line(x,y,x-25,y+25);
    line(x,y,x+25,y+25);

}
void head(int x ,int y){
    line(x,y,x,y-25);
}

int main()
{
    initwindow(600, 700);
    setcolor(BLACK);
    setbkcolor(WHITE);
    cleardevice();

    int x = 300, y = 300;
    // upper bengine
    setlinestyle(SOLID_LINE,BLACK,3);

    forward(x,y);
    head(x+25,y-50);
    leg(x,y);
    backward(x+50,y);
    backward(x+75,y+50);

    // lowr bengine

    getch();
    closegraph();
}
