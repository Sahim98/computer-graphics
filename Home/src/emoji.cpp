// C program to create a smiley face
#include <conio.h>
#include <graphics.h>
#include <stdio.h>

// Driver Code
int main()
{

	initwindow(700,500);

	setbkcolor(WHITE);
	cleardevice();
	setcolor(YELLOW);

	circle(300, 100, 40);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(300, 100, YELLOW);

	// Set color of background to black
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);

	// Use fill ellipse for creating eyes
	fillellipse(310, 85, 2, 6);
	fillellipse(290, 85, 2, 6);

	// Use ellipse for creating mouth
	ellipse(300, 100, 205, 335, 20, 9);
	ellipse(300, 100, 205, 335, 20, 10);
	ellipse(300, 100, 205, 335, 20, 11);

	getch();
	closegraph();

	return 0;
}
