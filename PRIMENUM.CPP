#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,count=0;
printf("enter value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
{
printf("prime number");
}
else
{
printf(" not a prime number");
}
getch();
}
