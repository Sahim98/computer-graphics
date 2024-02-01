#include<graphics.h>


int main(){

  initwindow( 600,600);
  setcolor(BLACK);

  setbkcolor(WHITE);
  cleardevice();
  int x = 300, y=300 , r = 100 ;

   circle(x,y,r) ;
   setfillstyle(SOLID_FILL,BLACK) ;
   floodfill(x,y,BLACK);
   setcolor(WHITE);

   setlinestyle(SOLID_FILL,WHITE,7);

   line(300,200,300,400);
   line(200,300,400,300);
   setcolor(BLACK) ;
   setlinestyle(SOLID_FILL,BLACK,7);
   line(300,150,300,200) ;
   line(300,400,300,450);
   line(150,300,200,300) ;
   line(400,300,450,300);

   getch();
closegraph();


}
