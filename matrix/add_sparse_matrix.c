#include <stdio.h>
#include <stdlib.h>
struct element
{
    int i;                    //row 
    int j;                    //column
    int x;                    //element
};
struct sparse
{
    int m;                    //total no of rows
    int n;                    //total no of columns
    int num;                  //total no of non-zero elements
    struct element *e;
};
void create(struct sparse *s)
{
    printf("enter dimensions");
    scanf("%d%d",&s->m,&s->n);
    printf("enter no of non-zero elements");
    scanf("%d",&s->num);
    s->e=(struct element*)malloc(s->num*sizeof(struct element));          //since pointer is of structure type.Also, we have to create an array with three rows i,j,x and no of columns is num. so we directly took the size odf struct and multiplied it with num
    printf("enter all: row, column and the element itself");
    for(int t=0; t<s->num; t++)
        scanf("%d%d%d",&s->e[t].i,&s->e[t].j,&s->e[t].x);               //made multiple arrays
}
void display(struct sparse s)
{
    for(int i=0,k=0; i<s.m; i++)
    {
        for(int j=0; j<s.n; j++)
            if(i==s.e[k].i && j==s.e[k].j)
                printf("%d\t",s.e[k++].x);
            else
                printf("0\t");
         printf("\n");
    }   
}
struct sparse* add(struct sparse s1, struct sparse s2)
{
    struct sparse *sum;
    if(s1.m != s2.m || s1.n != s2.n)
        return NULL;
    sum=(struct sparse*)malloc(sizeof(struct sparse));
    sum->e=(struct element*)malloc((s1.num+s2.num)*sizeof(struct element));
    sum->m=s1.m;
    sum->n=s1.n;
    
    int i=0, j=0, p=0, q=0, r=0;
    while (p<s1.num && q<s1.num)
        if(s1.e[p].i < s2.e[q].i)
            sum->e[r++] = s1.e[p++];
        else if(s1.e[p].i > s2.e[q].i)
                sum->e[r++] = s2.e[q++];
             else
             {
                if(s1.e[p].j < s2.e[q].j)
                    sum->e[r++] = s1.e[p++];
                else if(s1.e[p].j > s2.e[q].j)
                        sum->e[r++] = s2.e[q++];
                     else
                     {
                         sum->e[r] = s1.e[p];
                         sum->e[r++].x = s1.e[p++].x + s2.e[q++].x;
                     }  
             }     
    for(;p<s1.num;p++)
        sum->e[r++]=s1.e[p];
    for(;q<s2.num;q++)
        sum->e[r++]=s2.e[q];
    sum->num=r;
    return sum;
}
void main()
{
    struct sparse s1,s2,*s3;      //s3 has to be dynmaically created and hence, is taken as a pointer
    printf("\nfor matrix 1:\n");
    create(&s1);
    printf("\nfor matrix 2:\n");
    create(&s2);
    s3=add(s1,s2);
    printf("\nmatrix 1:\n");
    display(s1);
    printf("\nmatrix 2:\n");
    display(s2);
    printf("\nafter sum:\n");
    display(*s3);
}