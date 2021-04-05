//https://www.faceprep.in/c/find-all-triplets-with-the-given-sum/
/*Friendly Pair are two or more numbers with a common abundance.
     For example,6 and 28 are Friendly Pair.
		(Sum of divisors of 6)/6 = (Sum of divisors of 28)/28 */
#include <stdio.h>
main()
{
	int a,b,sum1=0,sum2=0,i;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	for(int i=1;i<a;i++)
		if(a%i==0)
			sum1=sum1+i;
	for(int i=1;i<b;i++)
		if(b%i==0)
			sum2=sum2+i;

	if(sum1/a == sum2/b)
		printf("friendly pair");
	else
		printf("not a friendly pair");	
}
