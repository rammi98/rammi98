#include<stdio.h>
int main()
{
int num;
printf("Enter the value:");
scanf("%d",&num);
if(num>0)
{
printf("%d is a Positive number.",num);
}
else if(num<0)
{
printf("%d is a Negative number.",num);
}
else
{
printf("%d is a zero.",num);
}
return 0;
}
