//Harshad Number is an integer that is divisible by the sum of its digits.
#include <stdio.h>
main()
{
	int n,i,sum=0;
	printf("enter a number: ");
	scanf("%d",&n);
	int m=n;
	while(n>0)
	{
		int j;
		j=n%10;
		sum=sum+j;
		n=n/10;
	}
	if(m%sum==0)
		printf("harshad number");
	else
		printf("not a harshad number");
}
