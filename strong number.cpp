//A strong number is a number in which the sum of the factorial of the digits is equal to the number itself
#include <stdio.h>
main()
{
	int n,j,sum=0,i;
	printf("enter a number");
	scanf("%d",&n);
	int m=n;
	while(n)
	{
		j=n%10;
		int f=1;
		for(i=1;i<=j;i++)
		{
		f=f*i;
		}
		sum=sum+f;
		n=n/10;
	}
	if(sum==m)
	printf("strong number");
	else
	printf("not a strong number");
}

