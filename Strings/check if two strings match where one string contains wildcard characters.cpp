//https://www.faceprep.in/c-plus-plus/check-if-two-strings-match-where-one-string-contains-wildcard-characters/
#include <stdio.h>                  //Rules:
#include <string.h>                 // +:It can be replaced with 0 or more occurrence of the previous character
main()                              // *:Matches any sequence of characters (including the empty sequence)
{                                   // ?:It can be replaced with a single occurrence of any character.
	char s1[100],s2[100];
	printf("Enter a string with special characters(+,*,?): ");
	gets(s1);
	printf("\nEnter other string: ");
	gets(s2);
	
	bool dp[strlen(s1)+1][strlen(s2)+1];              //can take value 0 or 1
	
	dp[0][0]=1;
	for(int i=1;i<=strlen(s2);i++)
		dp[0][i]=0;
		
	for(int i=1;i<=strlen(s1);i++)
		if(s1[i-1] == '*')
			dp[i][0]=dp[i-1][0];
		else
			dp[i][0]=0;
	
	for(int i=1;i<=strlen(s1);i++)
	{
		for(int j=1;j<=strlen(s2);j++)
		{
			if(s1[i-1] == s2[j-1])
				dp[i][j]=dp[i-1][j-1];
			else if(s1[i-1] == '?')
				dp[i][j]=dp[i-1][j-1];
				else if(s1[i-1] == '*')
					dp[i][j]=dp[i-1][j]||dp[i][j-1];
					else if(s1[i-1] == '+')
						{
							if(s1[i-2] == s2[j-1])
								dp[i][j]=dp[i-1][j] or dp[i][j-1];
							else
								dp[i][j] =0;
						}
						else
							dp[i][j] =0;
 		}
	}	
	
	if(dp[strlen(s1)][strlen(s2)])            //if true
		printf("TRUE");
	else                                      //if false
		printf("FALSE");
}
