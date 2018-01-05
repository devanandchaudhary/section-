#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,mul,div,n;
printf("enter the value\n");
scanf("%d%d",&a,&b);
printf("1 addition\n");
printf("2 substraction\n");
printf("3 multiplication\n");
printf("4 division\n");
printf("enter your choice\n");
scanf("%d",&n);
switch(n)
{
case 1: sum=a+b;
printf("sum is %d",sum);
break;
printf("substraction is %d",sub);
break;
printf("multiplication is %d",mul);
break;
printf("division is %d",div);
break;
default:printf("invalid choice");
}
getch();
}
