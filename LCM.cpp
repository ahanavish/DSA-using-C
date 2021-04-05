#include <stdio.h>
main()
{
	printf("enter two number to get its LCM");
	int a,b,c;
	scanf("%d %d",&a,&b);
	
	if(a>b)
		c=b;
	else
		c=a;

	for(int i=c;i>=c;i++)
		if(i%a==0 && i%b==0)
		{
		printf("\nLCM of %d and %d= %d \n",a,b,i);
		break;
		}		
}
