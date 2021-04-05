#include <stdio.h>
#include <stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array arr)
{
    printf("\nelements are:\n");
    for(int i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
int delete(struct array *arr,int index)
{
    int t=arr->A[index];
    for(int i=index;i<arr->length;i++)
        arr->A[i]=arr->A[i+1];
    arr->length--;
    return t;
    
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
printf("enter index which needs to be deleted");
scanf("%d",&index);
printf("deleted element: %d", delete(&arr,index));
display(arr);

free (arr.A);
arr.A=NULL;
}