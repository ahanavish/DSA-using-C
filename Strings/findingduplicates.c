//using bits, cant count the no of duplicates
#include <stdio.h>
#include <stdlib.h>
struct string
{
    char s[10];
    int H;
    int x;
};
void finding(struct string *str)
{
    for(int i=0; str->s[i] !='\0'; i++)
    {
        str->x = 1;
        str->x = str->x << (str->s[i] - 97);
        if((str->x & str->H) > 0)
            printf("\n%c is duplicate", str->s[i]);
        else
            str->H = str->x | str->H;
    }
}
void main()
{
    struct string str;
    printf("enter the string");
    gets(str.s);
    str.H=0;
    str.x=0;
    finding(&str);
}