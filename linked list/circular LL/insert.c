#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head = NULL, *last = NULL;
void create(int A[], int n)
{
    struct node *t;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = A[0];
    head->next = head;
    last = head;
    for(int i=1; i<n; i++)                                
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
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
void insert(int x, int pos)
{
    struct node *p = head, *t;
    t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    if(pos == 0)
    {
        while(p->next != head)
            p = p->next;
        p->next = t;
        t->next = head;
        head = t;
    }
    else
    {
        for(int i=0; i<pos-1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}
void main()
{
    int A[]={1,2,3,4}, x, pos;
    create(A,4);
    printf("\nbefore inserting:\n");
    display();
    printf("\nenter the no to be inserted and its position");
    scanf("%d%d", &x, &pos);
    insert(x, pos);
    printf("\nafter inserting:\n");
    display();
}