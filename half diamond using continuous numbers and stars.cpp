#include <stdio.h>
main()                                                         //example: n=3
{                                                              //   1
	int i,j,c=1,n;                                             //   2*3
	printf("Enter a number");                                  //   4*5*6
	scanf("%d",&n);                                            //   2*3
                                                               //   1
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++,c++)
			if(j<i)
				printf("%d*",c);
			else
				printf("%d",c);
		printf("\n");
	}

	c=c-n;
	for(i=n;i>=1;i--)
	{ 
		for(j=1;j<=i;j++,c++)
			if(j<i)
				printf("%d*",c);

			else
				printf("%d",c);

		c=(c+1)-2*i;
		printf("\n");
	}
}
