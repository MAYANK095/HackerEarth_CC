#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
circle(90,100,30);
outtextxy(125,100,"circle");
line(350,100,170,140);
outtextxy(380,110,"line");
arc(100,200,200,20,40);
outtextxy(160,200,"arc");
ellipse(260,200,0,360,40,60);
outtextxy(320,200,"ellipse");
sector(100,380,80,50,60,100);
outtextxy(130,360,"sector");
bar(300,380,340,310);
outtextxy(380,360,"bar");
outtextxy(350,180," ");
outtextxy(350,200," 04090302015");
getch();
}
