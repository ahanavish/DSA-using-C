//https://www.faceprep.in/c/find-all-triplets-with-the-given-sum/
#include <stdio.h>
void triple(int n, int arr[], int sum);
main()
{
	int n;
	printf("enter no of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int sum;
	printf("enter sum: ");
	scanf("%d",&sum);
	
	triple(n,arr,sum);
}

void triple(int n,int arr[], int sum)
{
	for(int i=0;i<n;i++)                  // sorted in ascending order
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int k=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=k;
			}
		}
	}
	
	printf("\nsorted: ");
	for(int i=0;i<n;i++)
		printf("%d",arr[i]);
	
	for(int i=0;i<n-1;i++)
	{
		int l=arr[i];
		int j=i+1;
		int k=n-1;
		
		while(j<k)
			if(arr[j]+arr[k]+l==sum)
			{
				printf("\ntriplets are %d %d %d: ",arr[k],arr[j],l);
				j++,k--;
			}	
			else if(arr[j]+arr[k]+l>sum)
					k--;		
				 else
			 		j++;
	}
}

