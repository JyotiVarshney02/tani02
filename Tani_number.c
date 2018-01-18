#include<stdio.h>
void main()
{
int n;
printf("Enter your number");
scanf("%d",&n);
if(n<0)
printf("Negative Number");
else if(n>=1&&n<=100000)
printf("Positive number");
else if(n==0)
printf("Zero");
}
