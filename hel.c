#include<stdio.h>
int main()
{
int i,n,rev=0,rem,t;
scanf("%d",&n);
  t=n;
while(n!=0)
  {
  rem=n%10;
  n=n/10;
  rev=(rev*10)+rem;}
  {
  if(rev==t)
printf("yes");
    else
      printf("no");
  }
return 0;
}
