#include <stdio.h>
main()
{
	int i,n,j=1;
	printf("enter a no to get its factorial");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=j*i;
	}
	printf("factorial of %d is %d",n,j);
}                                                                                                                                                                  
