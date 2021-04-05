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
        printf("%d\t", p->data);
        p = p->next;
    }
}
// using sliding pointers 
void reverse()
{
    struct node *p = first;
    struct node *q = NULL, *r = NULL;
    while(p != NULL)
    {
        r = q;
        q = p;
        p = p->next;

        q->next =r;
    }
    first = q;
}
void main()
{
    int A[]={1,4,6,9};
    create(A, 4);
    printf("\noriginal:\n");
    display(first);
    reverse();
    printf("\nafter reversing:\n");
    display(first);
}
/*using recursion
void reverse(struct node *p, struct node *q)
{
    if(p != NULL)
    {
        reverse(p->next, p);
        p->next = q;
    }
    else
        first = q;
}
void main()
{
    int A[]={1,4,6,9};
    create(A, 4);
    printf("\noriginal:\n");
    display(first);
    reverse(first, NULL);
    printf("\nafter reversing:\n");
    display(first);
}*/