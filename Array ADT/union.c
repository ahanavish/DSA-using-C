#include <stdio.h>
#include <stdlib.h>
struct array
{
    int A[10];
    int size;
    int length;
};
int unionn(struct array arr1, struct array arr2,struct array *arr3)
{
    int k=0,i=0,j=0;
    for(i=0,k=0; i<arr1.length; i++,k++)
        arr3->A[k]=arr1.A[i];

    arr3->length=k;

    for(j=0; j<arr2.length; j++)
        for(k=0; k<arr3->length; k++)
            if(arr2.A[j]==arr3->A[k])
                arr2.A[j]=-1;
    
    for(j=0, k=arr3->length; j<arr2.length; j++)
        if(arr2.A[j]!=-1)
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
struct array arr3={{0},arr1.length + arr2.length,unionn(arr1,arr2,&arr3)};
display(arr3);
}