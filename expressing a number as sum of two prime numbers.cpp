#include <stdio.h>
int prime(int x);
main()
{
	int n,i;
	printf("Enter a no");
	scanf("%d",&n);
	
	for(i=2;i<n/2;i++)
	{
		int d= prime(i);
		if(d==1)
		{
			int m=n-i;
			if(prime(m)==1)
				printf("%d can be written as sum of %d and %d",n,i,m);	
			else
				goto b;
		}
		else
			goto b;
			
		b:
			printf("\n");
	}
}
int prime(int x)
{
	int i,c;
	for(i=2,c=0;i<x;i++)
		if(x%i==0)
			c=1;                       // not prime
	
	if(c==1)
		return 0;
	else 
		return 1;
}
