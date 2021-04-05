#include <stdio.h>
main()
{
	printf("enter the character");
	char c;
	scanf("%c",&c);
	if(c>='a' && c<='z')
		printf("lower case");
	else if(c>='A' && c<='Z')
			printf("upper case");
		else if(c>='0' && c<='9')
				printf("numbers")
			else
				printf("symbols");	
}
