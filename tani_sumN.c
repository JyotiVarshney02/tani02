#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d is the sum of natural numbers upto %d",sum,n);
	
}
