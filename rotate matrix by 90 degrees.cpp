#include <stdio.h>
void replace(int arr[3][3])
{
	for(int i=0;i<3;i++)
	{
		int temp= arr[i][0];
		arr[i][0]=arr[i][2];
		arr[i][2]=temp;
	}
}
void transpose(int arr[3][3])
{
	int brr[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			brr[i][j]=arr[j][i];
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			arr[i][j]=brr[i][j];
			
	replace(arr);
}
void rotaten(int arr[3][3],int n)
{
	for(int i=0;i<n;i++)
		transpose(arr);
}
main()
{
	int arr[3][3];
	printf("enter elements");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
	
	printf("matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
			
	int n;
	printf("no of times matrix needs to be rotated 90 degrees");
	scanf("%d",&n);
	rotaten(arr,n);
	
	printf("\nafter rotating clockwise:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);	
		printf("\n");
	}	
}
