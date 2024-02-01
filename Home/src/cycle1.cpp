#include <graphics.h>


int main(){
    initwindow(600,600) ;
    setcolor(BLACK) ;
    setbkcolor(WHITE);
    cleardevice();

    //setlinestyle(SOLID_FILL,BLACK,5);

     int x=200,y=300,r=50;

     circle(x,y,r) ;//back cycle
     circle(x+200,y,r);//front cycle
     circle(x+85,y,10);

     line(x,y,x+75,y);
     line(x+85,y-10,x+20,y-85);
     line(x,y,x+30,y-75);

     //seat
     line(x+10,y-85,x+30,y-85);

     //font cycle handle

     line(x+200,y,x+150,y-85) ;
     line(x+90,y-10,x+158,y-75);


    getch();
	closegraph();


}


