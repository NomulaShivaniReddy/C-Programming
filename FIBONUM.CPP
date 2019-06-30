#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,a=0,b=1,c;
printf("enter the limit: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d \n",a);
c=a+b;
a=b;
b=c;
}
getch();
}