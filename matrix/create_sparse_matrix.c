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
void main()
{
    struct sparse s;
    create(&s);
    display(s);
}