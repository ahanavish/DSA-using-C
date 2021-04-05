//https://www.faceprep.in/c/program-to-count-common-sub-sequence-of-two-strings/
#include <stdio.h>
#include <string.h>
int count(char s1[], char s2[]);
main()
{
	char s1[10];
	char s2[10];
	printf("\nEnter string1 : ");
	gets(s1);
	printf("\nEnter string2 : ");
	gets(s2);
	printf("Count of common sub sequence is %d", count(s1,s2));
}
int count(char s1[], char s2[])
{
	int n1, n2;
	n1 = strlen(s1);
	n2 = strlen(s2);
	int arr[n1+1][n2+1];
	
	for (int i = 0; i <= n1; i++)
		for (int j = 0; j <= n2; j++)
			arr[i][j] = 0;
	
	for (int i = 1; i <= n1; i++)              // for each character of S1
		for (int j = 1; j <= n2; j++)            // for each character in S2
			if (s1[i-1] == s2[j-1])
				arr[i][j] = 1 + arr[i][j-1] + arr[i-1][j];
			else
				arr[i][j] = arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];

	return arr[n1][n2];
}

