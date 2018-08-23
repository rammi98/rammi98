#include<stdio.h>
int main()
{
int a,b,c,d,t,t1;
scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>c)
t=a-c;
  else
    t=c-a;
  if(b>d)
t1=b-d;
  else
  t1=d-b;  
  
printf("%d %d",t,t1);
}
