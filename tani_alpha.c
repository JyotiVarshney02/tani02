#include<stdio.h>
void main()
{
char n;
printf("Enter your alphabet");
scanf("%c",&n);
if((n>='a' && n<='z')||(n>='A' && n<='Z'))
printf("%c is an Alphabet",n);
else 
printf("%c is not an Alphabet",n);
}
