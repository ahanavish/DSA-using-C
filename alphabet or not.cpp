#include <stdio.h>
main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if((c >= 'a'&& c<='z') || (c>='A' && c<='Z'))
		printf("character is an alphabet");
	else
		printf("character is not an alphabet");	
}
