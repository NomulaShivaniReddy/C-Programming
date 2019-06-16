#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
int a[100];
printf("enter no of elements:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
printf("enter number %d:",i+1);
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if (a[0]<a[i])
a[0]=a[i];
}
printf("largest element= %d",a[0]);
getch();
}