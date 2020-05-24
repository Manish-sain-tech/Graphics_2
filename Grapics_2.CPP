#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<iostream.h>
#include<graphics.h>
#include<stdio.h>
void main()
{
clrscr();
int gd=DETECT,gm,i=5,a,j;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
settextstyle(4,0,4);
setcolor(RED);
outtextxy(10,100,"TWO PERSON");
line(150,320,150,380);
//hand
setcolor(GREEN);

line(150,330,170,350);
line(170,350,190,320);
setcolor(RED);

circle(190,320,3);
//hand
setcolor(GREEN);

line(150,350,170,365);
line(170,365,190,330);
setcolor(RED);

circle(190,330,3);
//base
setcolor(BLUE);

line(150,380,130,436);
line(150,380,170,436);

circle(150,300,20);
// 2 person
circle(360,300,20);
line(360,320,360,380);
//hand
setcolor(GREEN);

line(360,330,340,350);
line(340,350,320,310);
setcolor(RED);

circle(320,310,3);
//hand
setcolor(GREEN);

line(360,350,340,365);
line(340,365,320,330);
setcolor(RED);

circle(320,330,3);
//base
setcolor(BLUE);

line(360,380,380,436);
line(360,380,340,436);
line(0,436,getmaxx(),436);
rectangle(getmaxx(),436,650,431);
delay(50);
getch();
}