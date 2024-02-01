
#include<graphics.h>
int main()
{
    int  x = 200, y = 200, ch;

    initwindow(600,600);
    while (1){
            circle(x,y, 80);
            setcolor(RED);
            setlinestyle(SOLID_LINE,RED,4);
            outtextxy(400, 400,"Pres Esc to Exit...");
            if (kbhit()){
                        ch = getch();
                        if (ch == 'u') // move upward
                        {
                           y -=10;

                        }

                        if (ch == 'l') // move left
                        {
                            x -= 10;

                        }

                        if (ch == 'r') // move right
                        {
                            x += 10;

                        }

                        if (ch == 'd') // move downward
                        {
                            x = 0;
                            y = 1;
                        }

                         if (ch == 'o') // move downward
                        {
                            x = 200;
                            y = 200;
                        }
                        
                        if (ch == 27)
                                exit(0);
                    }
       

            delay(50);
            cleardevice();
        }
}
