#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head = NULL, *last = NULL;
void insert(int x)
{
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    
    if(head == NULL)
    {
        head = last = t;
        t->next = t;
    }
    else
    {
        last->next = t;
        t->next = head;
        last = t;
    }
}
void display()
{
    struct node *p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    } while (p != head);
}
int delete(int ind)
{
    int t;
    struct node* p = head, *q =NULL;
    if(ind == 1)
    {
        q = p;
        while(p->next != head)
            p = p->next;
        p->next = q->next;
        head = q->next;
        t = q->data;
        free(q);
    }
    else
    {
        for(int i=0; i<ind-1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        t = p->data;
        free(p);
    }
    return t;
}
void main()
{
    int n, x, ind;
    printf("no of elements?");
    scanf("%d",&n);
    printf("enter elements:");
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&x);
        insert(x);
    }
    printf("\nelements before:\n");
    display();
    printf("\nenter the index to be deleted");
    scanf("%d",&ind);
    printf("\nremoved element = %d", delete(ind));
    printf("\nafter deletion:\n");
    display();
}