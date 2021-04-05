#include <stdio.h>
#include <stdlib.h>
struct array
{
    int A[6];
    int size;
    int length;
};
int search(struct array arr,int key)
{
    for(int i=0;i<arr.length;i++)
        if(key==arr.A[i])
        {
            return i;
        }
    return -1;
}
void main()
{
    struct array arr={{16,7,13,5,8,9},10,6};
    int key;
    printf("enter element which needs to be searched");
    scanf("%d",&key);
    int t=search(arr,key);
    if(t==-1)
        printf("not found");
    else
        printf("found at %d position",t);
}