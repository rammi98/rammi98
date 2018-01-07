#include<stdio.h>
int main()
{
char c;
int  Lowercaseletter,Uppercasesletter;
printf("Enter an alphabet :");
scanf("%c",& c);
Lowercaseletter=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
Uppercasesletter=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(Lowercaseletter||Uppercasesletter)
{
printf("%c is an alphabet. ", c);
}else 
{
printf("%c is not an alphabet.",c);
}
return 0;
}
