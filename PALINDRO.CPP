#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,r,sum=0,temp;
printf("enter the num:");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=temp;
if(n==sum)
{
printf("palindrome number");
}
else
{
printf("not palindrome number");
}
getch();
}
