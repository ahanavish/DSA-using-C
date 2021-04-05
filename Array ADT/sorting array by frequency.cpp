#include<stdio.h>
main()
{
	int n;
	printf("enter no of elements");
	scanf("%d",&n);
	int a[n];
	printf("enter elements");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	int b[10];
	for(int i=0;i<10;i++)
		b[i]=0;
		
	for(int i=0;i<n;i++)
	{
		int t=a[i];
		b[t]++;
	}
	
	printf("\nsorted: ");
	for(int k=0;k<10;k++)
	{
		int maxhere=0;
		for(int i=0;i<10;i++)
			if(b[i]>maxhere)
				maxhere=b[i];
		
		for(int i=0;i<10;i++)
			if(b[i]==maxhere)
			{
				for(int j=0;j<maxhere;j++)
					printf("%d",i);
				b[i]=0;
				break;
			}
	}
}
