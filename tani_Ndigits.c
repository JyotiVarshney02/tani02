#include<stdio.h>
void main()
{
 int n,c=0,t;
 printf("Enter the number");
 scanf("%d",&n);
 t=n;
 while(n!=0)
     {
     n=n/10;
     c++;
      }
      printf("No of digits in %d are %d",t,c);
}
