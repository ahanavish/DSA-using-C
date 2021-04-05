#include<stdio.h>
#include <stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void add(struct array *arr,int n)
{
    arr->A[arr->length]=n;
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

int n;
printf("enter new element");
scanf("%d",&n);
add(&arr,n);
display(arr);

free (arr.A);
arr.A=NULL;
}