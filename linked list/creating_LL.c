#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*first = NULL, *last = NULL;
void display(struct node *p)
{
    printf("elements are:\n");
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
void insert(int x)
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
void main()
{
    int n, x;
    printf("no of elements?\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        insert(x);
    }  
    display(first);
}