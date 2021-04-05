#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*first = NULL;
void create(int A[], int n)
{
    struct node *t, *last;
    first = (struct node*)malloc(sizeof(struct node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void display()
{
    struct node *p = first;
    while(p)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
void main()
{
    int A[]={1,2,3,4};
    create(A, 4);
    printf("elements are:\n");
    display();
}