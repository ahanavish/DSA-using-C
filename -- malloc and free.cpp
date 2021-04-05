#include <stdio.h>
#include <stdlib.h>
main()
{
	int* ptr;
    ptr=(int*)malloc(5*sizeof(int));
	printf("enter numbers");
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n %d",ptr[i]);
	}
	free(ptr);
	printf("\n gives garbage value since freed alaocation:");
	for(i=0;i<5;i++)             //gives garbage value since allocated memory is freed.
	{
		printf("\n %d",ptr[i]);
	}
}
