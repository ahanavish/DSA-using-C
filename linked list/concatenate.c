#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL, *second = NULL, *third = NULL, *last = NULL;
void insert1(int x)
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(first == NULL)
        first = last = t;
    else
    {
        last->next = t;
        last = t;
    }
}
void insert2(int x)
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    if(second == NULL)
        second = last = t;
    else
    {
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
void concate(struct node *p, struct node *q)
{
    third = p;
    while(p->next != NULL)
        p = p->next;

    p->next = q;
}
void main()
{
    int n1, n2, x;
    printf("no of elements in LL1?");
    scanf("%d",&n1);
    printf("enter the elements for LL1: ");
    for(int i=1; i<=n1; i++)
    {
        scanf("%d",&x);
        insert1(x);
    }
    printf("no of elements in LL2?");
    scanf("%d",&n2);
    printf("enter the elements for LL2: ");
    for(int i=1; i<=n2; i++)
    {
        scanf("%d",&x);
        insert2(x);
    }
    printf("\nLinked List 1: \n");
    display(first);
    printf("\nLinked List 2: \n");
    display(second);
    concate(first, second);
    printf("\nconcatenated linked list:\n");
    display(third);
}