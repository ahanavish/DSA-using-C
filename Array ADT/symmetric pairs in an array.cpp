#include <stdio.h>
main()
{
	int i,j,n;
	printf("enter no of pairs: ");
	scanf("%d",&n);
	int arr[n][2];
	printf("\nenter pairs");
	
	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			scanf("%d",&arr[i][j]);
	
	int t=0;		
	for(int i=0;i<n;i++)	
		for(int j=0;j<n;j++)
			if(arr[i][0]== arr[j][1] && arr[j][0]==arr[i][1])
			{
				printf("symmetric pairs are: (%d ,",arr[i][0]);
				printf("%d) and (%d ,",arr[i][1],arr[j][0]);
				printf("%d)\n",arr[j][1]);
				t=1;
			}
	if(t==0)
		printf("not found");				
}
