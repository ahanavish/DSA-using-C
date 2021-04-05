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
void pair(struct array *arr,int sum)
{
    for(int i=0; i<arr->length; i++)
        if(arr->A[i]!=-1)
        {
            int rem=sum-arr->A[i];
            for(int j=0; j<arr->length; j++)
                if(arr->A[j]==rem && arr->A[i]!=rem)
                {
                    printf("\n%d and %d = %d",arr->A[i],arr->A[j],sum);
                    arr->A[i]=-1;
                    arr->A[j]=-1;
                }
        }
}
int main()
{
struct array arr;

printf("enter size of array");
scanf("%d",&arr.size);
printf("enter length of array");
scanf("%d",&arr.length);

int sum;
printf("enter given sum");
scanf("%d",&sum);

arr.A=(int*)malloc(arr.length*sizeof(int));
get(&arr);
display(arr);

pair(&arr,sum);

free (arr.A);
arr.A=NULL;
}