#include <stdio.h>
main()
{
	printf("enter two numbers to know its HCF \n");
	int a,b;
	scanf("%d %d",&a,&b);
	int c=0,i;
	for(i=2;i<=a && i<=b;i++)
		if(a%i==0 && b%i==0)
		{
			printf("HCF of %d and %d = %d",a,b,i);
			c=1;
			break;
		}
	if(c==1)
		printf("\n end of program");
	else 
		printf("HCF=1");
}
