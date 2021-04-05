//https://www.faceprep.in/c/program-to-find-the-maximum-product-subarray-in-a-given-array/
#include <stdio.h>
#include <string.h>
int min (int x, int y) {return x < y? x : y; }         //returns lesser one
int max (int x, int y) {return x > y? x : y; }         //returns bigger one
int Product(int arr[], int n)
{
	int max_ending_here = 1;
	int min_ending_here = 1;
	int max_so_far = 1;
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			max_ending_here = max_ending_here*arr[i];
			min_ending_here = min (min_ending_here * arr[i], 1);
		}
		else if (arr[i] == 0)
			{
				max_ending_here = 1;        // max at current position
				min_ending_here = 1;	
			}
			else           //arr[i]<0
			{
				int temp = max_ending_here;        // temp variable to store max
				max_ending_here = max (min_ending_here * arr[i], 1);       // update maximum product(if -ve,1 and otherwise,other one)
				min_ending_here = temp * arr[i];
			}
			
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;                      // update max value
	}
	return max_so_far; // return the max value
}

main()
{
	int n;
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("\nInput the array elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("/nMaximum product : %d",Product(arr,n));     // call the function
}
