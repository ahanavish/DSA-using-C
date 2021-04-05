#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int A[], int n)
{
    struct node *t, *last;
    first = (struct node*)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
struct node* search(struct node *p, int key)
{
    while(p != 0)
    {
        if(key == p->data)
            return p;
        p=p->next;
    }
    return NULL;
}
void main()
{
    struct node *result;
    int A[]={1,5,3,7,2,8,6}, key;
    printf("enter the number to be searched");
    scanf("%d",&key);
    create(A,7);
    result = search(first,key);
    if(result)
        printf("\nFound");
    else
        printf("not found");
    }