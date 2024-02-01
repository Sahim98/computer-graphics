#include <graphics.h>

int main()
{
    initwindow(700, 700);

    rectangle(200, 200, 400, 300);

    circle(250, 150, 50);
    // small circle
    circle(250, 150, 20);
    circle(360, 150, 50);
    // small circle
    circle(360, 150, 20);

    rectangle(400, 220, 425, 280);
    rectangle(425, 230, 450, 270);

    // projector face

    line(450, 230, 485, 200);
    line(450, 270, 485, 300);
    line(485, 200, 485, 300);

    // making stand
    line(300, 300, 250, 350);
    line(325, 300, 255, 350);
    line(250, 350, 255, 350);

    line(325, 300, 375, 350);
    line(350, 300, 380, 350);
    line(375, 350, 380, 350);



    getch();
    closegraph();
}