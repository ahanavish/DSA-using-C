//upper triangle
#include <stdio.h>
main()
{
	int arr[3][3];
	printf("enter the elements");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
			
	printf("array:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
	
	int s=0,t=0;
	for(int i=0;i<3;i++)
	{
		s=0;
		if(i!=0)
			for(int j=0;j<i;j++)
				if(arr[i][j]==0)
					s++;
		if(s==i)
			t++;
	}
	if(t==3)
		printf("upper triangular");
	else
		printf("not upper triangular");
}

/*//lower triangle
#include <stdio.h>
main()
{
	int arr[3][3];
	printf("enter the elements");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
			
	printf("array:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
	
	int s=0,t=0;
	for(int i=0;i<3;i++)
	{
		for(int j=2;j>i;j--)
			if(arr[i][j]==0)
				s++;
		if(s==3)
			t++;
	}
	
	if(t==2)
		printf("lower triangular");
	else
		printf("not lower triangular");
}*/
