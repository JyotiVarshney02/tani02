#include<stdio.h>
void main()
{
int n;
printf("Enter your number");
scanf("%d",&n);
if(n>=1&&n<=100000)
{
if(n%2==0)
printf("EVEN");
else
printf("ODD");
}
}
