#include<stdio.h>
int main()
{
int n,res,rem;
scanf("%d",&n);
if(n>60)
{
res=n/60;
rem=n%60;
printf("%d %d",res,rem);
}
else
printf("0 %d",n);
return 0;
}
