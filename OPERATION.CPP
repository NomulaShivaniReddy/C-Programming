#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,add,sub,mul,div;
printf("enter value of a:");
scanf("%d",&a);
printf("enter value of b:");
scanf("%d",&b);
add=a+b;
printf("\n sum=%d",add);
sub=a-b;
printf("\n difference=%d",sub);
mul=a*b;
printf("\n multiplication=%d",mul);
div=a/b;
printf("\n division=%d",div);
getch();
}



OUTPUT:
enter value of a:8
enter value of b:4
sum=12
difference=4
multiplication=32
division=2