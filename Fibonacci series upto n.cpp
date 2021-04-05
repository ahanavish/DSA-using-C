//Fibonacci series is a series in which each number is the sum of the last two preceding numbers.
#include <stdio.h>
main()                              
{                                                   
	int a=0,b=1,sum=1,n,i;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;sum<n;i++)
	{
		printf("%d \n",sum);
		sum=a+b;
		a=b;
		b=sum;
	}	
}

