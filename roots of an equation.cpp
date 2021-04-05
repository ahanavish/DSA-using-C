#include <stdio.h>
#include <math.h>
main()
{
	printf("enter a,b and c of the quadratic equation");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int d=b*b - (4*a*c);
	float x1,x2;

	if(d==0)
	{
		printf("real and equal roots \n");
		x1=-b/(2*a);
		x2=-b/(2*a);
		printf("roots are %f and %f",x1,x2);
	}
	else
		if(d>0)
		{
			printf("real and unequal roots \n");
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("roots are %f and %f",x1,x2);
		}
		else
			if(d<0)
			{
				printf("imaginary roots \n");
				x1=(-b+sqrt(-d))/(2*a);
				x2=(-b-sqrt(-d))/(2*a);
				printf("roots are %f",x1);
				printf("i and %f",x2);
				printf("i");
			}
		
	
}
