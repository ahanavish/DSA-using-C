#include <stdio.h>
#include <math.h>
int btod(int);                  //binary to decimal
int dtoo(long int);              //decimal to octal
main()
{
	int n,c,t;
	printf("enter a binary no");
	scanf("%d",&n);
	int decimal= btod(n);                    
	int octal=dtoo(decimal);
	printf("in octal = %d",octal);
}
int btod(int n)                  //binary to decimal
{
	int j,sum=0,t,i=0;
	while(n>0)
	{
		j=n%10;
		t=pow(2,i);
		sum=sum+j*t;
		i++;
		n=n/10;
	}
	return sum;
}
int dtoo(long int n)                  //decimal to octal
{
	int t=0,j;
	for(int i=1;n!=0;i=i*10,n=n/8)                        //i=i*10 because we need to print it in the reverse order
	{
		j=n%8;
		t=t+j*i;
	}
	return t;
}
