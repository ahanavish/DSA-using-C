// saddle point is the minimum of a row and maximum of the column 
#include <stdio.h>
int main()
{
	int min, max,pos[2][2];
	int matrix[3][3];
	printf("enter elements");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf("%d", &matrix[i][j]);
			
	printf("matrix:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%d", matrix[i][j]);
		printf("\n");
	}
// find the saddle points in the given matrix 
	for (int i = 0; i < 3; i++)
	{
		min = matrix[i][0];
		for (int j = 0; j < 3; j++)
			if (min >= matrix[i][j])
			{
				min = matrix[i][j];
				pos[0][0] = i;
				pos[0][1] = j;
			}
			
    	int j = pos[0][1];
        max = matrix[0][j];
		for (int k = 0; k < 3; k++)
			if (max <= matrix[k][j])
			{
				max = matrix[i][j];
				pos[1][0] = k;
				pos[1][1] = j;
			}
			
		if (min == max) 
			if (pos[0][0] == pos[1][0] &&pos[0][1] == pos[1][1])
				printf("\nSaddle point (%d, %d) : %d\n",pos[0][0], pos[0][1], max);
	}
}
