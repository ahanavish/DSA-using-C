#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*head = NULL, *last = NULL;
void insert(int x)
{
    struct node* t =(struct node*)malloc(sizeof(struct node));
    t->data = x;
    
    if(head == NULL)
    {
        head = last = t;
        t->prev = t;
        t->next = t;
    }
    else
    {
       last->next = t;
       t->prev = last;
       t->next = head;
       head->prev = t;
       last = t; 
    } 
}
void display()
{
    struct node* p = head;
    do
    {
        printf("%d\t",p->data);
        p = p->next;
    } while (p != head);
}
int delete(int ind)
{
    struct node* p = head, *q, *o;
    for(int i=0; i<ind-1; i++)
        p = p->next;
    if(p == head)
        head = p->next;
    o = p->prev;
    q = p->next;
    o->next = p->next;
    q->prev = p->prev;
    int x = p->data;
    free(p);
    return x;
}
void main()
{
    int n, x, ind;
    printf("no of elements?");
    scanf("%d", &n);
    printf("enter all the elements:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    printf("before:\n");
    display();
    printf("\nwhich index has to be deleted?");
    scanf("%d", &ind);
    printf("deleted element = %d", delete(ind));
    printf("\nafter deletion:\n");
    display();
}