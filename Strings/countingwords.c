#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct string 
{
    char s[10];
    int size;
    int length;
};
int number(struct string str)
{
    int n=1;                                           // because if spaces are n, words would be n+1
    for(int i=0;i<str.length;i++)
        if(str.s[i]==' ' &&  str.s[i-1]!=' ')
            n++;
    return n;
}
void main()
{
    struct string str={"I am Ahana",10,strlen(str.s)};
    printf("no of words in the sentence = %d",number(str));
}