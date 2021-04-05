#include <stdio.h>
#include <string.h>
main()
{
	char a[]="Amy";

	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>=97 && a[i]<=122)
			a[i]=a[i] -32;
	
		else 
			if(a[i]>=65 && a[i]<=90)
		
			a[i]=a[i] + 32;
	
			else
			printf("error");	
	}
	printf("%s",a);	
}
