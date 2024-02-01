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

    int x1,y1,x2,y2;
    printf("Enter value of line: ");
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

    line(x1,y1,x2,y2);

    printf("Enter center & radius of cycle: ");

    int x,y,r;
    scanf("%d %d %d",&x,&y,&r);

    circle(x,y,r);
    int d =min(dist(x,y,x1,y1),dist(x,y,x2,y2));
    int d1 =max(dist(x,y,x1,y1),dist(x,y,x2,y2));
    int a = (y2-y1)/(x2-x1);
    int c = y1-a*x1;
    int b = -1;
    
    isTouchOrIntersect(a,b,c,x,y,r);
 
    getch();
	closegraph();


}


