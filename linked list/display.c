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
void display(struct node *p)
{
    printf("elements are:\n");
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
/* for recursive:
void display(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d\t",p->data);
        display(p->next);
    }
}*/
void main()
{
    int n;
    printf("enter no of elements");
    scanf("%d",&n);
    int A[n];
    printf("enter the elements");
    for(int i=0; i<n; i++)
        scanf("%d",&A[i]);
    create(A,n);
    display(first);
}