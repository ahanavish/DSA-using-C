#include <stdio.h>
#include <stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};
int inter(struct array arr1, struct array arr2,struct array *arr3)
{
    int i,j,k=0;
    for(j=0; j<arr2.length; j++)
        for(i=0;i<arr1.length;i++)
            if(arr2.A[j]==arr1.A[i])
            {
                arr3->A[k]=arr2.A[j];
                k++;
            }
    return k;
}

void display(struct array arr3)
{
    printf("\nelements are:\n");
    for(int i=0; i<arr3.length; i++)
        printf("%d\t", arr3.A[i]);
}
void main()
{
struct array arr1={{7,1,4,3,2},10,5};
struct array arr2={{7,9,2},10,3};
struct array arr3={{0},arr2.length,inter(arr1,arr2,&arr3)};
display(arr3);
}