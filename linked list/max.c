#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL;
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
        t-> next = NULL;
        last->next = t;
        last = t;
    }
}
int maxx(struct node *p)
{
    int max= 0;
    while(p != 0)
    {
        if(p->data > max)
            max= p->data;
        p = p->next;
    }
    return max;
}
void main()
{
    int A[]={1,2,4,16,7,8,100,9};
    create(A,8);
    printf("max = %d",maxx(first));
}