#include <stdio.h>
int power(long int);
main()
{
	long int n,sum=0,i=0,j,t;
	printf("enter binary number");
	scanf("%d",&n);
	while(n>0)
	{
		j=n%10;
		t=power(i);
		sum=sum+j*t;              //j*t gets added only if j=1 
		i++;
		n=n/10;
	}
	printf("In decimal = %d",sum);	
}
int power(long int p)
{
	int i,q=1;
	for(i=1;i<=p;i++)
		q=q*2;
	return q;
}
