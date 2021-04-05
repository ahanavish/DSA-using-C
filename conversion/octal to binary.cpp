#include <stdio.h>
#include <math.h>
int otod(int);           //octal to decimal
int dtob(long int);           //decimal to binary
main()
{
	int n,c,t;
	printf("enter an octal no");
	scanf("%d",&n);
	int decimal= otod(n);
	int binary=dtob(decimal);
	printf("in binary = %d",binary);
}
int otod(int n)
{
	int j,sum=0,t,i=0;
	while(n>0)
	{
		j=n%10;
		t=pow(8,i);
		sum=sum+j*t;
		i++;
		n=n/10;
	}
	return sum;
}
int dtob(long int n)
{
	int t=0,j;
	for(int i=1;n!=0;i=i*10,n=n/2)
	{
		j=n%2;
		t=t+j*i;
	}
	return t;
}
