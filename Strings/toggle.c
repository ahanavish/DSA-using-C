#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct string 
{
    char s[10];
    int size;
    int length;
};
void display(struct string str)
{
    for(int i=0;i<str.length;i++)
        printf("%c\t",str.s[i]);
}
void toggle(struct string *str)
{
    for(int i=0;i<str->length;i++)
        if(str->s[i]>='a' && str->s[i]<='z')
            str->s[i]-=32;
        else if(str->s[i]>='A' && str->s[i]<='Z')
            str->s[i]+=32;
}
void main()
{
    struct string str={"AmAyRa",10,strlen(str.s)};
    printf("\nbefore:\n");
    display(str);
    toggle(&str);
    printf("\nafter:\n");
    display(str);
}
