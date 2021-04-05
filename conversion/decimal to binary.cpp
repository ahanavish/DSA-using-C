#include <stdio.h>
main()
{
	int n,j,t=0;
	printf("enter a no");
	scanf("%d",&n);
	for(int i=1;n!=0;i=i*10,n=n/2)
	{
		j=n%2;
		t=t+j*i;
	}
	printf("%d",t);
}
