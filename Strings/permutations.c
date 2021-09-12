/*#include <stdio.h>
void perm(char s[], int k)
{
    static int A[10]={0};
    static char res[10]={0};
    int i;
    if(s[k]=='\0')
    {
        res[k]='\0';
        printf("\n%s",res);
    }
    else
    {
        for(i=0; s[i]!='\0'; i++)
            if(A[i]==0)
            {
                res[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
    }   
}
void main()
{
    char s[]="ABC";
    perm(s,0);
}*/
#include <stdio.h>
void swap(char* x, char* y)
{
    char temp = *x;
    *x= *y;
    *y= temp;
}
void perm(char s[], int l, int h)
{
    int i;
    if(l==h)
        printf("\n%s",s);
    else
        for(int i=l; i<=h; ++i)
        {
            swap(&s[l],&s[i]);
            perm(s,l+1,h);
            swap(&s[l],&s[i]);
        }
}
void main()
{
    char s[]="ABC";
    perm(s,0,2);
}