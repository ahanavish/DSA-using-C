#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head = NULL;
void create(int A[], int n)
{
    struct node *t, *last;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = A[0];
    head->next = head->prev = NULL;
    last = head;

    for(int i=1; i<n; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
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
void main()
{
    int A[]={1,3,5,7,9};
    create(A, 5);
    printf("\nelements are:\n");
    display();
}