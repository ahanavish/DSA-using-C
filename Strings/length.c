#include <stdio.h>
#include <stdlib.h>
struct string
{
    char *s;
    int size;
    int length;
};
int length(struct string str)
{
    int i=0;
    while(str.s[i]!='\0')
        i++;
    return i;
}
void main()
{
    struct string str;
    str.size=10;
    str.s=(char*)malloc(str.size*sizeof(char));
    printf("enter string");
    gets(str.s);
    str.length=length(str);
    printf("length = %d",str.length);
}