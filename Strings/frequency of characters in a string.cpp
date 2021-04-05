#include <stdio.h>
#include <string.h>
main()
{
	char str[100];
	int freq[256] = {0},i;                  //total range of ascii =256
	gets(str);
	
	for(i = 0; str[i] != '\0'; i++)
	{
		freq[str[i]]++;
	}
	
	for(i = 0; i < 256; i++)
	{
		if(freq[i] != 0)
		{
			printf("%c - %d\n", i, freq[i]);
		}
	}
}
