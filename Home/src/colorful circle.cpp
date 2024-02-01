#include<bits/stdc++.h>
#include<graphics.h>


int main(){
    int gd = DETECT,gm, x= 300,y=150,radius=50;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(BLACK) ;
    setbkcolor(WHITE);
    cleardevice();
    // Define the array of points for the polygon
    int poly0 [] = {186,221,274,221,274,142,186,142};
    setfillstyle(SOLID_FILL, YELLOW);
    fillpoly(4, poly0);

    int poly1[] = {274,221,300,289,360,260,333,188};
    setfillstyle(SOLID_FILL, RED);

    fillpoly(4, poly1);


   int poly2 []={300,289,230,330,262,385,330,340};
   setfillstyle(SOLID_FILL,GREEN);
   fillpoly(4,poly2);

   int poly3 []={230,330,192,385,119,342,156,288};
   setfillstyle(SOLID_FILL,BLUE);
   fillpoly(4,poly3);

   int poly4 [] ={156,288,186,221,120,192,88,258};
   setfillstyle(SOLID_FILL,RED);
   fillpoly(4,poly4);

   // Set line style to a thicker width (4)
    setlinestyle(SOLID_LINE, 0, 4);
   circle(230,270,180);

getchar();
closegraph();
}

