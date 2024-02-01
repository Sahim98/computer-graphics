#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<math.h>

       int main(void)
	      {
		  int ts,h,k,r,te,i;
		  float y,x;

		  /* request auto detection */
		  int gdriver = DETECT, gmode, errorcode;
		  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

		  printf("Using Trigonometric Method (Circle)");

		  i=1;
		  ts=0;
		  te=45;
		  r=90;
		  h=450;
		  k=150;


		  while(ts<=te)
		  {
			    x=r*cos(ts);
			    y=r*sin(ts);

			    putpixel(x+h,y+k,2);
			    putpixel(y+h,x+k,2);
			    putpixel(-y+h,x+k,3);
			    putpixel(-x+h,y+k,3);
			    putpixel(-x+h,-y+k,4);
			    putpixel(-y+h,-x+k,4);
			    putpixel(y+h,-x+k,5);
			    putpixel(x+h,-y+k,5);

			    ts++;
		   }
	    getch();
       closegraph();
 }

