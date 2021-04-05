#include <stdio.h>
main()
{
	int i,j,k,n;      //f cant be declared here.
	printf("enter a no");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		int f=0;
		for(j=2;j<i;j++)
		{                
			if(i%j==0)                   //0-not prime ,not 0-prime
				f++;
		}
		if(f==0)
		{
			printf("%d\n",i);
		}
	}	
}
