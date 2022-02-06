#include<GRAPHICS.H>
#include<conio.h>
#include<dos.h>
int main()
{   int x;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setbkcolor(WHITE);
for(x=0;x<=400;x=x+10)
{ cleardevice();
setcolor(RED);
rectangle(50+x,100,150+x,200);
rectangle(150+x,150,200+x,200);
setcolor(2);
circle(75+x,210,10);
circle(175+x,210,10);

sound(1000);
delay(100);
}
nosound();
getch();
closegraph();
return 0;
}
