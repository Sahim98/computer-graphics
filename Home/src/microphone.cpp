#include <graphics.h>


int main()
{
    initwindow(1000,1000);

    setlinestyle(SOLID_LINE,0xFFFF,10);

    arc(200,200,0,180,40);

    line(160,200,160,300);

    line(240,200,240,300);

    arc(200,300,180,360,40);

    arc(200,300,180,360,65);

    line(200,365,200,400);

    line(150,400,250,400);






    getch();
	closegraph();

	return 0;
}

