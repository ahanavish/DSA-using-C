#include <stdio.h>
main()
{
	 int a[10];
	 printf("enter a sequence of 10 numbers(only 0 and 1)");
	 for(int i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 int t=0;
	 int l =sizeof(a)/sizeof(a[0]);
	 for(int i=0;i<l;i++)
	 {
	 	if(a[i]==0)
	 	{
	 		
	 		if(a[i+1]==1)
			{
				for(int j=i+2;j<l;j++)
				{
					if(a[j]==0)
					{
					t++;
					break;
					}
					else
					printf("");
				}
			}	
		}
		else
		printf("");
	 }
	 printf("%d",t); 
}
