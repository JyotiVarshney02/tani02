#include<stdio.h>
void main()
{
	int n,k,a[n],i,sum=0;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the value of k\n");
	scanf("%d",&k);
	if(k<n)
	{
//	printf("%d%d",k,n);
    printf("Enter your array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    for(i=0;i<k;i++)
    {
    	sum=sum+a[i];
	}
	printf("\nsum of first %d numbers is %d",k,sum);
}
else
printf("K must be less than n");
}
