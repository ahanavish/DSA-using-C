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
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void move(struct node *p, int key)
{
    struct node *q = NULL;
    while(p != 0)
    {
        if(key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
}
void display(struct node *p)
{
    while(p != 0)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}
void main()
{
    int A[]={1,4,6,8,9,5};
    create(A,6);
    printf("\noriginal:\n");
    display(first);
    move(first, 9);
    printf("\nafter moving key to the head:\n");
    display(first);
}