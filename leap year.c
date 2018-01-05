#include<stdio.h>
#include<conio.h>
void main()
{
int year;
printf("enter a year\n");
scanf("%d",&year);
(year%4==0 &&year%100!=0)?printf("leap year"):((year%400==0)?printf("leap year"):printf("not a leap year"));
getch();
}
