#include <graphics.h>

int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, " ");
	outtextxy(50, 30 + 20, "Program to draw a smiley face in C graphics:");
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(200, 200, 50);
	floodfill(200,200,YELLOW);

	//setfillstyle(SOLID_FILL, WHITE);
	//floodfill(201, 201, WHITE);

	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);
	circle(180, 180, 5);
	floodfill(181, 181, BLACK);//eyes
	circle(220, 180, 5);
	floodfill(221, 181, BLACK);//eyse
	// setcolor(WHITE);
	line(182, 211, 218, 211);
	// setfillstyle(SOLID_FILL,WHITE);
	// floodfill(221,181,WHITE);
	arc(200, 211, 180, 360, 18);

	getch();
	return 0;
}
