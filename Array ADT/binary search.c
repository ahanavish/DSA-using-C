#include <stdio.h>
#include <stdlib.h>
struct array
{
    int A[6];
    int size;
    int length;
};
int search(struct array arr,int low, int high, int key)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr.A[mid]==key)
            return mid;
        else if(key>arr.A[mid])
            low=mid+1;
            else
                high=mid-1;
    }
    return -1;
}
void main()
{
    struct array arr={{5,8,9,12,15,24},10,6};              //sorted
    int key;
    printf("enter element which needs to be searched");
    scanf("%d",&key);
    int low=0,high=arr.length;
    int t=search(arr,low,high,key);
    if(t==-1)
        printf("not found");
    else
        printf("found at %d position",t);
}