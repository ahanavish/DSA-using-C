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
    t = (struct node *)malloc(sizeof(struct node));
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
void display()
{
    struct node *p = first;
    while(p != NULL)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}
int delete(int ind)
{
    struct node *p = first, *q = NULL, *r;
    for(int i=1; i<ind; i++)
    {
        q=p;
        p=p->next;
    }
    r = p;
    int x = p->data;
    if(p == first)
        first=p->next;
    else
        q->next = p->next;
    free(r);
    return x;
}
void main()
{
    int n, x, ind; 
    printf("no of elements:");
    scanf("%d",&n);
    printf("\nenter elements:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\nbefore:\n");
    display();
    printf("\nwhich index needs to be deleted? ");
    scanf("%d",&ind);
    printf("removed element = %d",delete(ind));
    printf("\nafter:\n");
    display();
}