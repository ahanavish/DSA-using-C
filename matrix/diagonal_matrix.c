#include <stdio.h>
#include <stdlib.h>
struct matrix
{
    int n;
    int *m;
};
void get(struct matrix *mat)
{
    printf("enter the diagonal elements");
    for(int i=0; i<mat->n; i++)
        scanf("%d",&mat->m[i]);
}
void display(struct matrix mat)
{
    printf("matrix:\n");
    for(int i=0; i<mat.n; i++)
    {
        for(int j=0; j<mat.n; j++)
            if(i==j)
                printf("%d\t",mat.m[i]);
            else
                printf("0\t");
         printf("\n");   
    }
}
void main()
{
    struct matrix mat;
    printf("enter order:");
    scanf("%d",&mat.n);
    mat.m= (int*)malloc(mat.n*(sizeof(int)));
    get(&mat);
    display(mat);
}