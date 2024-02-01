#include <graphics.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int dist(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void isTouchOrIntersect(int a, int b, int c, int h, int k, int radius) {
   int dist = (abs(a * h + b * k + c)) / sqrt(a * a + b * b);
   if (radius == dist)
      outtext("Touching the circle");
   else if (radius > dist)
      outtext("Intersecting the circle");
   else
      outtext( "Outside the circle");
}
int main(){
    initwindow(600,600) ;
    setcolor(BLACK) ;
    setbkcolor(WHITE);
    cleardevice();

    printf("Enter center & radius of cycle: ");

    int x,y,r;
    scanf("%d %d %d",&x,&y,&r);

    circle(x,y,r) ;
    rectangle(x-r,y-r,x+r,y+r);


    getch();
	closegraph();


}


