#include<stdio.h>
void main()
{
char n;
printf("Enter your alphabet");
scanf("%c",&n);
if((n>='a' && n<='z')||(n>='A' && n<='Z'))
{

if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
printf("%c is Vowel",n);
else 
printf("%c is Consonant",n);
}
else 
printf("%c is not an alphabet",n);
}
