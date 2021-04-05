// A perfect number is a number which is equal to the sum of its proper positive divisors.(including 1,exluding itself) 
#include <stdio.h>
main()
{
	int n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
		sum=sum+i;
		}
	}
	if(sum == n)
	printf("perfect");
	else
	printf("not perfect");	
}
