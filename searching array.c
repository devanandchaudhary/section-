#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[20],count=0,key;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the element\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the key element to be searched");
scanf("%d",&key);
for (i=0;i<n;i++)
{
    if(key==a[i])
    {
        count++;
    }
}
if(count==1)
{
    printf("element exist\n\a");
}
else
{
    printf("element doesnt exist\n\a");
}
getch();
}
