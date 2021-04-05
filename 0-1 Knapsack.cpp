//https://www.faceprep.in/c/0-1-knapsack-problem/
//Given weights and values of n items, the task is to put these items in a knapsack of capacity weight W to get the maximum value.
//In this problem, 0-1 means that we can either put the complete item in the knapsack or ignore it.
#include<stdio.h>
int max(int a, int b) { return (a > b)? a : b; }
int knapSack(int n, int weight[], int value[], int W)
{
	int i, w;
	int K[n+1][W+1];
	for (i = 0; i <= n; i++)            /* Build table K[][] in bottom up manner */
		for (w = 0; w <= W; w++)
			if (i==0 || w==0)
				K[i][w] = 0;
			else if (weight[i-1] <= w)
				K[i][w] = max(value[i-1] + K[i-1][w-weight[i-1]], K[i-1][w]);
				else
					K[i][w] = K[i-1][w];
	return K[n][W];
}

main()
{
	int n;
	printf("\nEnter the number of items : ");
	scanf("%d", &n);
	int value[n],weight[n];
	printf("\nEnter the item’s weight and its value \n");
	for(int i = 0; i < n; i++)
		scanf("%d %d", &weight[i], &value[i]);
	int w;
	printf("\nEnter the capacity of the knapsack(weight capacity) : ");
	scanf("%d", &w);
	printf("\nMaximum value in a 0-1 knapsack : %d\n", knapSack(n, weight, value, w));
}
