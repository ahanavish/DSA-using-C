//can be done by juggling as well - https://www.youtube.com/watch?v=viaha1SnpT4&feature=emb_title
// can be done by reversal as well -https://www.youtube.com/watch?v=QOpU9-l5T7Y 
//can be done by block swap as well -https://www.youtube.com/watch?v=kCKWws9aTYw *&* https://www.faceprep.in/c-plus-plus/block-swap-algorithm-for-array-rotation/
//left cyclic rotation
#include <stdio.h>
void left_rotate_by_one(int arr[], int n)
{ 
	int temp = arr[0],i;                // Shift operation to the left 
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];
	arr[i] = temp;
}

void array_left_rotate(int arr[],int n,int no_of_rotations)
{
	for (int i = 0; i < no_of_rotations; i++)
		left_rotate_by_one(arr, n);            // Function is called for no_of_rotations times 
}

main()
{
	int n;
	printf("enter size of array");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array elements before rotating : \n");
	for(int i = 0; i < n; i++) 
		printf("%d\t",arr[i]);                             // Printing the array elements
	int no_of_rotations;                           // Number of rotations to take place
	printf("\nno of rotations: ");
	scanf("%d",&no_of_rotations);
	array_left_rotate(arr,n,no_of_rotations);
	printf("\nArray elements after rotating : \n");
	for(int i = 0; i < n; i++)
		printf("%d\t",arr[i]);   // Printing the array elements after rotation of elements
}

/*//right cyclic rotation
#include <stdio.h>
void right_rotate_by_one(int arr[], int n)
{
	int temp = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];
	arr[0] = temp;
}

void array_right_rotate(int arr[], int n, int no_of_rotations)
{
	for (int i = 0; i < no_of_rotations; i++)
		right_rotate_by_one(arr, n);     // Function is called for no_of_rotations times 
}

main()
{
	int n;
	printf("enter size of array");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array elements before rotating : \n");
	for(int i = 0; i < n; i++) 
		printf("%d\t",arr[i]);                             // Printing the array elements
	int no_of_rotations;                           // Number of rotations to take place
	printf("\nno of rotations: ");
	scanf("%d",&no_of_rotations);
	array_right_rotate(arr,n,no_of_rotations);
	printf("\nArray elements after rotating : \n");
	for(int i = 0; i < n; i++)
		printf("%d\t",arr[i]);       // Printing the array elements after rotation of elements
}*/
