#include <stdio.h>
main()
{
	char c;
	printf("enter an alphabet");
	scanf("%c",&c);
	switch (c)
	{
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		default:
			printf("consonant");
	}
}
