/*An abundant number is a number for which the 
    sum of its proper divisors is greater than the number itself*/
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
	if(sum>n)
	printf("abundant");
	else
	printf("not abundant");	
}
