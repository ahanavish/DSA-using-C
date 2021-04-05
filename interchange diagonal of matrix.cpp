#include <stdio.h>
main()
{
	int arr[3][3];
	printf("enter elements");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);

	printf("before:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
	
	for(int i=0; i<3; i++)
    {
        int j = i;
        int temp = arr[i][j];
        arr[i][j] = arr[i][(3-j) - 1];
        arr[i][(3-j) - 1] = temp;
    }
	
	printf("\nafter interchanging diagonal:\n");		
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
	
}
