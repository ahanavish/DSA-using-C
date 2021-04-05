#include <stdio.h>
#include <stdlib.h>
main()
{
	int* ptr;
    ptr=(int*)calloc(5,sizeof(int));
	printf("enter numbers");
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("entra no");
	ptr=(int*)realloc(ptr,10);   //5 more no
		for(i=5;i<10;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n %d",ptr[i]);
	}
}
