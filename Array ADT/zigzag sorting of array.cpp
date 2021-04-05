//https://www.faceprep.in/c/convert-the-given-array-into-zigzag-pattern/
#include <stdio.h>
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void zig_zag(int arr[], int n)
{
	int flag = 0;
	for (int i=0; i<n-1; i++)
	{
		if (flag)                                     //if flag=1 - true(if is executed) and if flag=0 - false(else is executed)
			if (arr[i] > arr[i+1])					  
				swap(&arr[i], &arr[i+1]);
		
		else                                           
			if (arr[i] < arr[i+1])
				swap(&arr[i], &arr[i+1]);
	
		flag = !flag;
	}
}

main()
{
	int n;
	printf("\nEnter the number of elements : ");
	scanf("%d", &n);
	int arr[n], i;
	printf("\nInput the array elements : ");
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	printf("\nZigzag pattern of the array : ");
	zig_zag(arr, n);
	for (int i=0; i<n; i++)
		printf("%d", arr[i]);
	printf("\n");
}
