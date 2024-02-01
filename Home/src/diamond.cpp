#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main(){
    initwindow(700,600) ;
    setcolor(BLACK) ;
    setbkcolor(WHITE);
    cleardevice();

    setlinestyle(SOLID_LINE,BLACK,4);
    
    //diamond shape
    line(300,300,400,200);
    line(400,200,500,300);
    line(300,300,400,400);
    line(400,400,500,300);

    //little diamond

    line(350,300, 400,250);
    line(400,250,450,300);
    line(350,300, 400,350);
    line(400,350,450,300);

    line(400,250,400,350);




    
    //cut diamond
    line(300,300,500,300);
    line(350,250,450,350);
    line(450,250,350,350);





    getch();
	closegraph();


}


