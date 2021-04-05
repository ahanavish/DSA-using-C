//An automorphic number is a number whose square ends with the number itself.
#include <stdio.h>
main()
{
	int n,s,p;
	printf("enter a number(two or three digit number)");
	scanf("%d",&n);
	s=n*n;

	if(0<s && s<=100)                //for two digit s            
		p=s%10;
	else if(100<s && s<=1000)             //for three digit s
			p=s%100
		
	if(p==n)
		printf("automorphic");
	else
		printf("not");	
}
