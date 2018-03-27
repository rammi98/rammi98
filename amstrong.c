#include<stdio.h>
int main()
{
int num,rem,exponent,result=1,sum=0,t;
scanf("%d",&num);
t=num;
while(num!=0)
{
rem=num%10;
result=result*rem;
exponent--;
sum=sum+result;
num=num/10;
}
if(t=sum)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

