#include <stdio.h>  
main()
{
	int i,j,k,n,b;
	printf("enter a three digit number to reverse it");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		i=n%10;
		j=j*10+i;
		n=n/10;
	}
	printf("reversed no is %d",j);
}                                                                                                                                                                            
