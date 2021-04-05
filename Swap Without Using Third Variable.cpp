#include <stdio.h>
main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);  
	printf("a=%d and b=%d",a,b);             //a=4,b=5
	a=a+b;                              //a=9
	b=a-b;                              //b=9-5
	a=a-b;                              //a=9-4
	/*
	a=a*b;
	b=a/b;
	a=a/b;
	*/
	printf("\n after swap: \n");
	printf("a=%d and b=%d",a,b);
}
