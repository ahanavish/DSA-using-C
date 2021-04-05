//https://www.youtube.com/watch?v=0qSU0nxIZiE&t=673s
#include <stdio.h>
#include<string.h>
void replace(char* str, char* sub, char* news);
main()
{
	char str[100],sub[100],news[100];
	printf("enter main string: ");
	gets(str);
	printf("\n");
	printf("enter substring which needs to be replaced: ");
	gets(sub);
	printf("\n");
	printf("enter new substring:");
	gets(news);
	printf("\n");
	
	replace(str,sub,news);	
}
void replace(char* str,char* sub,char* news)
{                                                           //string: hi hello
	char* p=strstr(str,sub);                                //sub: hi
	if(p==NULL)                                             //news: hye
	printf("not found");                                    // hi hello
	                               						    //   ^
	else                                                    //   |  
	{                                                       //   p (pointer where substring is found in string)
	memmove(p+strlen(news),p+strlen(sub),strlen(p)-strlen(sub)+1);
	memcpy(p,news,strlen(news));
	printf("after replacing: %s",str);
	}
}
