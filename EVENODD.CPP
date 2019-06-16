#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a;
printf("enter value of a: ");
scanf("%d",&a);
if(a%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
getch();
}