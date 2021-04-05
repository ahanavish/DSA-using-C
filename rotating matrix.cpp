#include <stdio.h>
void rotateonce(int arr[3][3])
{
	for(int i=0;i<3;i++)
	{
		int temp=arr[i][0];
		arr[i][0]=arr[i][1];
		arr[i][1]=arr[i][2];
		arr[i][2]=temp;
	}
}
void rotaten(int arr[3][3],int n)
{
	for(int i=0;i<n;i++)
		rotateonce(arr);
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
}
main()
{
	int arr[3][3];
	printf("enter elements");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
			
	printf("\nmatrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
		
	int n;	
	printf("enter the no of times matrix has to be rotated");
	scanf("%d",&n);
	rotaten(arr,n);
}
