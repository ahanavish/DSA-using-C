#include <stdio.h>
#include <stdlib.h>
struct array 
{
    int A[5];
    int size;
    int length;
};
void display(struct array arr)
{
    printf("\nelements are:\n");
    for(int i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
void onerot(struct array *arr)                       //address is passed into arr pointer
{
    int temp=arr->A[0], i;
    for(i=0; i<arr->length-1; i++)
        arr->A[i]=arr->A[i+1];
    arr->A[i]=temp;
}
void noofrot(struct array *arr, int n)             //arr is a pointer
{
    for(int i=0;i<n;i++)
        onerot(arr);                               // passing pointer i.e address
}
void main()
{
    struct array arr={{1,6,3,8,4}, 10, 5};
    int n;
    printf("enter no of left rotations needed");
    scanf("%d", &n);
    noofrot(&arr, n);
    printf("array after rotation:/n");
    display(arr);
}