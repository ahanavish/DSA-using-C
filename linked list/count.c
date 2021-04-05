#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node* next;
}*first = NULL;
void create(int A[])
{
    struct node *t, *last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    int i=1;
    while(A[i] != NULL)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
        i++;
    }
}
int count(struct node *p)
{
    int c=0;
    while(p!=NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}
void main()
{
    int A[]={1,2,5,4,7,9,8,6};
    create(A);
    printf("count = %d",count(first));
}