#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL, *last = NULL;
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
void display()
{
    struct node *p = first;
    while(p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
int sort()
{
    struct node *q=NULL, *p=first;
    while(p->next != NULL)
    {
        q = p;
        p = p->next;
        if(q->data > p->data)
            return 0;
    }
    return 1;
}
void main()
{
    int n, x;
    printf("no of elements?");
    scanf("%d",&n);
    printf("enter all the elements");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    display();
    if(sort() == 1)
        printf("\nsorted");
    else
        printf("\nnot sorted");
}