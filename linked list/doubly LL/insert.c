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
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display()
{
    struct node* p =first;
    while(p)
    {
        printf("%d\t",p->data);
        p = p->next;
    }
}
void insert(int x, int pos)
{
    struct node *p = first, *t;
    t = (struct node*)malloc(sizeof(struct node));
    t->data = x;

    if(pos == 0)
    {
        t->prev = NULL;
        t->next = p;
        p->prev = t;
        first = t;
    }
    else
    {
        for(int i=0; i<pos-1; i++)
            p = p->next;
        t->next = p->next;
        if(p->next )
            p->next->prev = t;
        p->next = t;
        t->prev = p;
    }   
}
void main()
{
    int A[]={1,3,5,7,9}, x, pos;
    create(A,5);
    printf("before inserting:\n");
    display();
    printf("\nenter element to be inserted and its position");
    scanf("%d%d", &x, &pos);
    insert(x, pos);
    printf("\nafter inserting:\n");
    display();
}