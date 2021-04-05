#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
}*first = NULL;
void create(int A[], int n)
{
    struct node* last, *t;
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
void display()
{
    struct node* p = first;
    while(p)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
int mid()
{
    struct node *p = first, *q = first;
    while(q->next)
    {
        p = p->next;
        q = q->next;
        if(q->next != NULL)
            q = q->next;
    }
    return p->data;
}
void main()
{
    int A[] = {1,3,5,7,9,11};
    create(A, 6);
    printf("elements are:\n");
    display();
    printf("\nmid element is %d", mid());
}