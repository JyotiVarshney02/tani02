#include<stdio.h>
#include<math.h>
void main()
{
	int a,n,p;
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter the power to be calculated");
	scanf("%d",&p);
	a=pow(n,p);
	printf("%d Power %d is %d",n,p,a);
}
