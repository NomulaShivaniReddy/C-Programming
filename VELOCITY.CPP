#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int v,u,a,t,x;
printf("enter value of a:");
scanf("%d",&a);
printf("enter value of t:");
scanf("%d",&t);
x=a*t;
printf("x=%d",x);
printf("\nenter the value of u:");
scanf("%d",&u);
v=u+x;
printf("velocity : %d",v);
getch();
}



OUTPUT:
enter value of a:1
enter value of t:2
x=2
enter value of u:4
velocity : 6
