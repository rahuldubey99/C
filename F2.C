#include<stdio.h>
#include<conio.h>
void main()
{ int gd=0,gm;
 initgraph(&gm,&gd,"C:\\turboc++\\disk\\turboc3\\bgl");
 setcolor(1);
 printf("hello C");
 getch();
 closegraph();

 getch();
}