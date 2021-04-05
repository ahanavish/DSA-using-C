#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*head = NULL;
void create(int A[], int n)
{
    struct node* last, *t;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = A[0];
    head->prev = head->next = NULL;
    last = head;

    for(int i=1; i<n; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->prev = last;
        last->next = t;
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
        printf("%d\t", p->data);
        p = p->next;
    } while (p != head);    
}
void insert(int x, int pos)
{
    struct node* t = (struct node*)malloc(sizeof(struct node)), *p = head;
    t->data = x;

    if(pos == 0)
    {
        t->next = head;
        t->prev = head->prev;
        head->prev->next = t;
        head->prev = t;
        head = t;
    }
    else
    {
        for(int i=0; i<pos-1; i++)
            p = p->next;
        t->next = p->next;
        p->next->prev = t;
        p->next = t;
        t->prev = p;
    }
}
void main()
{
    int A[]={1,3,5}, x, pos;
    create(A, 3);
    printf("elements before:\n");
    display();
    printf("\nenter element that needs to be inserted and the position");
    scanf("%d%d", &x, &pos);
    insert(x, pos);
    printf("\nafter inserting:\n");
    display();
}