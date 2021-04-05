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
    printf("enter elements");
    for(int i=0;i<arr->length;i++)
        scanf("%d",&arr->A[i]);
}
void display(struct array arr)
{
    printf("\nelements are:\n");
    for(int i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
int main()
{
struct array arr;

printf("enter size of array");
scanf("%d",&arr.size);
printf("enter length of array");
scanf("%d",&arr.length);

arr.A=(int*)malloc(arr.length*sizeof(int));
get(&arr);
display(arr);

free (arr.A);
arr.A=NULL;
}