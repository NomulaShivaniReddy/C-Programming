#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[20];
int i;
printf("enter the string:");
scanf("%s",a);
i=strlen(a);
printf("string length: %d",i);
getch();
}