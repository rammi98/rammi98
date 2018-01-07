#include<stdio.h>
int main()
{
char c;
int  LowercaseVowels,UppercaseVowels;
printf("Enter an alphabet :");
scanf("%c",& c);
LowercaseVowels=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
UppercaseVowels=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(LowercaseVowels||UppercaseVowels)
{
printf("%c is a vowel ", c);
}else 
{
printf("%c is a consonant",c);
}
return 0;
}
