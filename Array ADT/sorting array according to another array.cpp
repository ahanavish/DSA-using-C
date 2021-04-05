#include <stdio.h>
#include <string.h>
main()
{
	int n,m;
	printf("enter the size of first array and another array used to sort");
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	printf("enter the first array");
	for(int j=0;j<n;j++)
		scanf("%d",&a[j]);
	
	printf("enter another array");
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);
		
	printf("\n\nSorted: \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i]==a[j])
			{
				printf("%d\t",b[i]);
				a[j]=0;
			}
		}
	}
	for(int j=0;j<n;j++)
		if(a[j]!=0)
			printf("%d\t",a[j]);
}
