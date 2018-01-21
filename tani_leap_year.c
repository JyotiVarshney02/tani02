#include<stdio.h>
void main()
{
	int year;
	printf("Enter a year\n");
	scanf("%d",&year);
	if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			printf("%d year is a Leap Year",year);
			else
			printf("%d year is not a Leap Year",year);
	
		}
		else
		printf("%d year is a Leap Year",year);
	}
	else
	printf("%d year is not a Leap Year",year);
}
