#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*first = NULL;
void create(int A[], int n)
{
    struct node *last, *t;
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
void display(struct node *p)
{
    while(p != NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}
void dup(struct node *p)
{
    struct node *q = p->next;
    while(q != NULL)
    {
        if(p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
void main()
{
    int A[]={1,2,2,3,3,5};
    create(A,6);
    printf("\nbefore:\n");
    display(first);
    dup(first);
    printf("\nafter removal of duplicates:\n");
    display(first);
}