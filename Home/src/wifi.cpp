#include <graphics.h>

int main()
{

    initwindow(900,900);

    setlinestyle(SOLID_LINE,BLACK,4) ;

    arc(200,200,35,145,90);
    arc(200,220,40,140,80);
    arc(200,240,50,130,70);
    arc(200,260,60,120,60);
    arc(200,280,70,110,45);

    setfillstyle(SOLID_FILL,WHITE) ;
    circle(200,278,5);
    floodfill(200,280,WHITE);




    getch();
	closegraph();

	return 0;
}


