#include<stdio.h>
int main()
{
int num,i,min;
scanf("%d",&num);
int a[num];
for(i=0;i<num;i++)
scanf("%d",&a[i]);
min=a[0];
for(i=0;i<num;i++)
if(a[i]<min)
min=a[i];
printf("%d",min);
return 0;
}
