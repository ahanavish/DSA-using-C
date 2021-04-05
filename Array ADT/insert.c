#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void insert(struct array *arr, int n, int index)
{
    if(index<=arr->length)
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
    arr->A[index]=n;
    arr->length++;
}
void display(struct array arr)
{
    printf("\nelements are:\n");
    for(int i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
void main()
{
struct array arr;
arr.A=(int*)malloc(5*sizeof(int));
arr.size=10;
arr.length=5;
for(int i=0;i<5;i++)
    arr.A[i]=i;

int n,index;
printf("enter element and the index it is needed to be inserted");
scanf("%d %d",&n,&index);
insert(&arr,n,index);
display(arr);

free (arr.A);
arr.A=NULL;
}