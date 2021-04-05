//Equilibrium index of an array is an index such that Sum of elements at lower indexes = Sum of elements at higher indexes.
//element at equilibrium index is not included in the either of sums
#include <stdio.h>
main()
{
	int n;
	printf("enter array size");
	scanf("%d",&n);
	int a[n];
	printf("enter the array");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	int sum=0;
	for(int i=0;i<n;i++)
		sum=sum+a[i];
	
	int left=0,right=0;	
	for(int i=1;i<n;i++)
	{
	left=left+a[i-1];
	right=sum-left-a[i];	
	if(left==right)
		printf("equilibrium index= %d th",i);
	}	
}
