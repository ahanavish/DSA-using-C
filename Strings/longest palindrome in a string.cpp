//https://www.youtube.com/watch?v=Fi5INvcmDos&t=627s
#include <stdio.h>
#include <string.h>
char* get(char c[],int start,int end)
{
	int l=end-start+1;
	int temp=l;
	char* str = new char[l+1];
	char* p1 =str;
	char* p2 = &c[start];
	
	while(temp--)
	{
		*(p1++)=*(p2++);
	}
	*p1='\0';
	return str;
}

main()
{
	char string[100];
	char* str= string;
	printf("enter a string");
	gets(string);
	const int l=strlen(str);              //str==string
	
	char* palindrome = new char[l];            //to store longest palindrome
	int pallen=0;                                // initialising it to 0
	
	bool table[l][l];
	
	for(int i=0;i<l;i++)
		for(int j=0;j<l;j++)
			table[i][j]=false;
			
	for(int i=0;i<l;i++)              //if length=1
	{
		table[i][i]=true;
		
		if(strlen(get(str,i,i))>pallen)
		{
			palindrome=get(str,i,i);
			pallen= strlen(palindrome);
		}
	}		
	
	for(int i=0;i<l-2;i++)              //if length=2
	{
		if(str[i]==str[i+1])
			table[i][i+1]=true;
			
		if(strlen(get(str,i,i+1))>pallen)
		{
			palindrome=get(str,i,i+1);
			pallen= strlen(palindrome);
		}
	}				
	    
	int j;                            //length>3
	for(int k=2;k<l;k++)
		for(int i=0;i<l;i++)
		{
			j=i+k;
			if(str[i]==str[j] && table[i+1][j-1]==true)
			{
				if(strlen(get(str,i,j))>pallen)
				{
					palindrome=get(str,i,j);
					pallen= strlen(palindrome);
				}
				table[i][j]=true;
			}
		}	
	printf("longest palindrome is of length %d and is %s",strlen(palindrome),palindrome);	
}



