#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,n,position,value;
printf("enter no of elements:");
scanf("%d",&n);
printf("enter %d numbers:",n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the position of an element:");
scanf("%d",&position);
printf("enter the value:");
scanf("%d",&value);
for(i=n-1;i>=position-1;i--)
a[i+1]=a[i];
a[position-1]=value;
printf("resultant values are:\n");
for(i=0;i<=n;i++)
printf("%d \n",a[i]);
getch();
}