//https://www.faceprep.in/c/longest-subarray-having-average-greater-than-or-equal-to-k/
#include <stdio.h>
int subarray_avg(int a[], int k, int len);
main()
{
	int a[20], len, i, k;
	printf("\nEnter the number of elements : ");
	scanf("%d", &len);
	printf("\nInput the array elements : ");
	for(i=0; i<len; i++)
		scanf("%d", &a[i]);
	printf("\nInput the k value : ");
	scanf("%d", &k);
	if(subarray_avg(a, k, len)!=0)
		printf("\nsub-array average : %d\n",subarray_avg(a, k, len));
	else
		printf("no subarray");
}
int subarray_avg(int arr[],int x,int n)
{
	int length=0 ,temp =0 ;
	int max=0,sum=0,i;
	for(i=0;i<n;i++)
	{
		sum = sum+arr[i];
		temp++;
		if(sum>max && sum/temp>=x && temp>=length)
		{
			max= sum ;
			length =temp;
		}
		if(sum<0)
		{
			sum=0;
			temp=0;
		} 
	}
return length;
}
