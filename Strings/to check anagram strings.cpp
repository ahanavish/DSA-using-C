//https://www.faceprep.in/c-plus-plus/check-if-two-strings-are-anagrams-or-not/
#include <stdio.h>
int anagram(char [], char []);
main()
{
	char a[100], b[100];
	printf("Enter two strings : \n");
	gets(a);
	gets(b);

	if (anagram(a, b) == 1)
		printf("The strings are anagrams\n");	
	else
		printf("The strings are not anagrams\n");
}

int anagram(char a[], char b[])
{
	int first[26] = {0}, second[26] = {0}, j=0;

	while (a[j] != '\0')
	{
		first[a[j]-'a']++;
		j++;
	}

	j = 0;
	while (b[j] != '\0')
	{
		second[b[j]-'a']++;
		j++;
	}

	// Comparing frequency of characters
	for (j = 0; j< 26; j++)
		if (first[j] != second[j])
			return 0;

	return 1;
}
