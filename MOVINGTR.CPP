#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main(void)
{
int i;
int gdriver=DETECT,gmode;
initgraph (&gdriver,&gmode,"c:\\tc\\bgi");
for (i=50;i<=350;i++)
{
delay(30);
cleardevice();
rectangle(50+i,200,200+i,300);
rectangle(200+i,240,230+i,260);
rectangle(200+i,260,260+i,300);
circle(90+i,320,20);
circle(160+i,320,20);
}
getch();
closegraph();
return 0;
}