#include <stdio.h>
main()
{
	int n,j,t=0;
	printf("enter a decimal number");
	scanf("%d",&n);
	for(int i=1;n!=0;i=i*10,n=n/8)
	{
		j=n%8;
		t=t+j*i;
	}
	printf("%d",t);
}
