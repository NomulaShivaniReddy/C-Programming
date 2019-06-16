#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a[100];
clrscr();
printf("enter no of elements: ");
scanf("%d",&n);
printf("enter numbers:\n");
for (i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("even numbers are: ");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("%d \t",a[i]);
}
}
printf("\n odd numbers are: ");
for(i=0;i<n;i++)
{
if (a[i]%2!=0)
{
printf("%d \t",a[i]);
}
}
getch();
}