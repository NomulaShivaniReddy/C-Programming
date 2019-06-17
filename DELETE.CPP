#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,n,position;
printf("enter no of elements:");
scanf("%d",&n);
printf("enter number %d \n",n);
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the location where u delete number\n");
scanf("%d",&position);
if (position>=n+1)
printf("deletion not possible\n");
else
{
for(i=position-1;i<n-1;i++)
a[i]=a[i+1];
printf("resltant array is \n");
for (i=0;i<n-1;i++)
printf("%d\n",a[i]);
}
getch();
}