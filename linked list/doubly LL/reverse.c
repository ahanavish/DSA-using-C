#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*first = NULL, *last = NULL;
void insert(int x)
{
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->prev = t->next = NULL;

    if(first == NULL)
        first = last = t;
    else
    {
        last->next = t;
        t->prev = last;
        last = t;
    } 
}
void display()
{
    struct node* p = first;
    while(p)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
void reverse()
{
    struct node* p = first, *temp;
    while(p)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;             // because after swapping, p->prev is the next node
        if(p != NULL && p->next == NULL)
            first = p;
    }
}
void main()
{
    int n, x;
    printf("no of elements?");
    scanf("%d", &n);
    printf("enter all the elements:");
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    printf("before:\n");
    display();
    reverse();
    printf("\nafter reversing:\n");
    display();
}