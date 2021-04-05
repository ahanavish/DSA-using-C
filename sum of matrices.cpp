#include <stdio.h>
main()
{
	int i,j;
	printf("enter 9 digits for matrix 1\n");
	int a[10][10],b[10][10],c[10][10];
for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			scanf("%d",&a[i][j]);
        }
	}
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("%d",a[i][j]);
        }
        printf("\n");
	}
	printf("enter 9 digits for matrix 2\n");
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			scanf("%d",&b[i][j]);
        }
	}
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("%d",b[i][j]);
        }
        printf("\n");
	}
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
        }
	}
	printf("sum of two matrices:\n");
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("%d\t\t\t",c[i][j]);
        }
        printf("\n");
	}
}
