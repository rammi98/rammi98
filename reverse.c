#include<stdio.h>
int main()
{
int i,n,rem,res=0;
scanf("%d",&n);
while(n>0)
{
rem=n%10;
res=res*10+rem;
n=n/10;
}
printf("%d",res);
return 0;
}
