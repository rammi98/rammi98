#include<stdio.h>
int main()
{
int i,j,count,n1,n2;
scanf("%d""%d",&n1,&n2);
for(i=n1+1;i<n2;i++)
{
count=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==2)
printf("%d ",i);
}
return 0;
}
