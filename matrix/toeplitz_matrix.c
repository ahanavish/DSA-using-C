#include <stdio.h>
#include <stdlib.h>
struct matrix 
{
    int *m;
    int n;
};
void get(struct matrix *mat)
{
    printf("enter elements");
    for(int i=0; i<(2*mat->n)-1; i++)
        scanf("%d",&mat->m[i]);
}
void display(struct matrix mat)
{
    printf("\nmatrix:\n");
    for(int i=0; i<mat.n; i++)
    {
        for(int j=0;j<mat.n; j++)
            if(j>=i)
                printf("%d\t",mat.m[j-i]);
            else
                printf("%d\t",mat.m[mat.n-1+i-j]);
        printf("\n");        
    }
}
void main()
{
    struct matrix mat;
    printf("enter the order");
    scanf("%d",&mat.n);
    mat.m=(int*)malloc(((2*mat.n)-1)*sizeof(int));
    get(&mat);
    display(mat);
}