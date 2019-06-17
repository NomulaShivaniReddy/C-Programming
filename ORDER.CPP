#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,j,n,temp;
clrscr();
printf("enter no of elements");
scanf("%d",&n);
printf("enter number \n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
for (i=0;i<n-1;i++)
{
for (j=i;j<n;j++)
{
if (a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\nascending order:");
for(i=0;i<n;i++)
printf("%d \t",a[i]);
printf("\ndescending order:");
for(i=n-1;i>=0;i--)
printf("%d \t",a[i]);
getch();
}