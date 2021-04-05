//https://www.faceprep.in/c/find-the-possible-number-of-decodings-of-a-given-digit-sequence/
#include <stdio.h>
#include <string.h>
int count(char *a, int n)
{
	int c[n+1]; 	              		// An array to store results of subproblems
	c[0] = 1;                           //if digits =0
	c[1] = 1;                           //if digits =1
	for (int i = 2; i <= n; i++)
	{
		c[i] = 0;
		// If the last digit != 0, then last digit must add to the number of words
		if (a[i-1] > '0')
			c[i] = c[i-1];

		// If second last digit is smaller than 2 and last digit is smaller than 7, then last two digits form a valid character
		if (a[i-2] == '1' || (a[i-2] == '2' && a[i-1] < '7') )
	 		c[i] = c[i] + c[i-2];
	}
	return c[n];
}

main()
{
	char a[15];
	printf("Enter the digit sequence : ");
	gets(a);
	int n = strlen(a);	
	printf("Possible count of decoding of the sequence : %d", count(a, n));
}
