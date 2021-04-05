#include <stdio.h>
#include <string.h>
main()
{
	char s[100],j;
	printf("enter a string");
	gets(s);
	int a[256];
	
	for(int i=0;i<256;i++)
		a[i]=0;
	 
	for(int i=0;i<strlen(s);i++)
	{
		j=s[i];
		a[j]=a[j]+1;
		
		if(a[j]==1)
		printf("%c",s[i]);
	}
}
