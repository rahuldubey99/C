#include<stdio.h>
#include<conio.h>
void main()
{ int gd=0,gm;
 initgraph(&gm,&gd,"C:\\turboc++\\disk\\turboc3\\bgl");
 setcolor(1); //to determine the color
 printf("hello C"); //to display some thing on the screen
 getch();
 closegraph();

 getch();
}
