#include <stdio.h>
struct array
{
    int A[6];
    int size;
    int length;
};
void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
        printf("%d\t",arr.A[i]);
}
void reverse(struct array *arr)
{
    int i=0, j=arr->length-1;
    while(i<j)
    {
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
        i++, j--;
    }
}
void main()
{
    struct array arr={{1,5,3,6,7,5},10,6};
    printf("before:\n");
    display(arr);
    reverse(&arr);
    printf("\nafter:\n");
    display(arr);
}