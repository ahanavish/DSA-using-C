#include <stdio.h>
int power(long int);
main()
{
	int n,j,sum=0,t=0,i=1;
	printf("enter octal no");
	scanf("%d",&n);
	while(n!=0)
	{
		j=n%10;
		t=power(i);
		sum=sum+j*t;
		i++;
		n=n/10;
	}
	printf("%d",sum);
}
int power(long int x)
{
	int y=1;
	for(int i=1;i<x;i++)
	{
		y=y*8;
	}
	return y;
}
