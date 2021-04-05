#include <stdio.h>
main()
{
	int n,c,i;
	printf("enter starting no and count");                           //example: 3 & 4
	scanf("%d %d",&n,&c);                                            //       3
	                                                                 //       4 4
	for(i=1;i<=c;i++,n++)                                            //       5 5 5 
	{                                                                //       6 6 6 6
		for(int j=1;j<=i;j++)                                        //       5 5 5 
		printf("%d",n);                                              //       4 4
		                                                             //       3
		printf("\n");
	}
	
	int t=i-1;
	for(int l=t-1;l>=1;l--)
	{
		printf("%d",l);
		for(int j=1;j<l;j++)
		{
			printf("%d",l);
		}
		
		printf("\n");
	}
}
