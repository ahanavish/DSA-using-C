#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head = NULL;
void create(int A[], int n)
{
    struct node *last, *t;
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
    printf("\nelements are:\n");
    struct node *p = head;
    do
    {
        printf("%d\t", p->data);
        p = p->next;
    }while(p != head);
}
void main()
{
    int A[]={1,3,5,7,9};
    create(A, 5);
    display();
}