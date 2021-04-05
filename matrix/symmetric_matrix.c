/* row major
#include <stdio.h>
#include <stdlib.h>
struct matrix
{
    int n;
    int *m;
};
void get(struct matrix *mat)
{
    int t= ((mat->n)*(mat->n+1))/2;
    printf("enter the elements(row major)");
    for(int i=0; i<t; i++)
        scanf("%d",&mat->m[i]);
}
void display(struct matrix mat)
{
    printf("matrix:\n");
    for(int i=0; i<mat.n; i++)
    {
        for(int j=0; j<mat.n; j++)
            if(j<=i)
            {
                int t=((i*(i+1))/2)+j;
                printf("%d\t",mat.m[t]);
            }
            else
            {
                int t=((j*(j+1))/2)+i;
                printf("%d\t",mat.m[t]);
            }
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
*/
//column major
#include <stdio.h>
#include <stdlib.h>
struct matrix
{
    int n;
    int *m;
};
void get(struct matrix *mat)
{
    int t= ((mat->n)*(mat->n+1))/2;
    printf("enter the elements(column major)");
    for(int i=0; i<t; i++)
        scanf("%d",&mat->m[i]);
}
void display(struct matrix mat)
{
    printf("matrix:\n");
    for(int i=0; i<mat.n; i++)
    {
        for(int j=0; j<mat.n; j++)
            if(j<=i)
            {
                int t=((mat.n*j) - ((j-1)*j)/2) + (i-j);
                printf("%d\t",mat.m[t]);
            }
            else
            {
                int t=((mat.n*i) - ((i-1)*i)/2) + (j-i);
                printf("%d\t",mat.m[t]);
            }
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