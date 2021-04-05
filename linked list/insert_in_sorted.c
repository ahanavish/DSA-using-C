#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL, *last = NULL;
void insert(int x)
{
    struct node *t;
    t= (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(first == NULL)
        first = last = t;
    else
    {
        last -> next = t;
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
void sorted(int x)
{
    struct node *p=first, *q, *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    while(p && x > p->data)
    {
        q = p;
        p = p->next;
    }
    if(p == first)
    {
        t->next = first;
        first = t;
    }
    else
    {
        t->next = q->next;
        q->next = t;
    }     
}
void main()
{
    int n, x, new;
    printf("no of elements?");
    scanf("%d",&n);
    printf("\nenter elements in sorted manner:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\nbefore adding a new element\n");
    display(first);
    printf("\nenter the new element to be added:");
    scanf("%d",&new);
    sorted(new);
    printf("\nafter addition:\n");
    display(first);
}