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
    for(int i=0; i<(3*mat->n)-2; i++)
        scanf("%d",&mat->m[i]);
}
void display(struct matrix mat)
{
    printf("\nmatrix:\n");
    for(int i=0; i<mat.n; i++)
    {
        for(int j=0;j<mat.n; j++)
            if(j-i == 1)
                printf("%d\t",mat.m[i]);
            else if(i == j)
                    printf("%d\t",mat.m[mat.n-1+i]);
                 else if(i-j == 1)
                        printf("%d\t",mat.m[(2*mat.n)-1+j]);
                      else
                        printf("0\t"); 
        printf("\n");        
    }
}
void main()
{
    struct matrix mat;
    printf("enter the order");
    scanf("%d",&mat.n);
    mat.m=(int*)malloc(((3*mat.n)-2)*sizeof(int));
    get(&mat);
    display(mat);
}