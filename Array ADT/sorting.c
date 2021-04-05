#include <stdio.h>
#include <stdlib.h>
struct array 
{
    int *A;
    int size;
    int length;
};
void get(struct array *arr)
{
    printf("enter the elements");
    for(int i=0;i<arr->length;i++)
        scanf("%d",&arr->A[i]);
}
void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
        printf("%d\t",arr.A[i]);
}
void sort(struct array *arr)
{
    for(int i=0; i<arr->length; i++)
        for(int j=0;j<i; j++)
            if(arr->A[i]>arr->A[j])
            {
                int temp=arr->A[i];
                arr->A[i]=arr->A[j];
                arr->A[j]=temp;
            }
}
void main()
{
    struct array arr;
    printf("enter size of array");
    scanf("%d",arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    printf("enter length");
    scanf("%d",&arr.length);
    get(&arr);
    printf("\nbefore:\n");
    display(arr);
    sort(&arr);
    printf("\nafter:\n");
    display(arr);
}