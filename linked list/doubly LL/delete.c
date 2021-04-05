#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first = NULL, *last = NULL;
void insert(int x)
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = t->prev = NULL;

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
        printf("%d\t",p->data);
        p = p->next;
    }
}
void delete(int ind)
{
    struct node* p = first, *q = NULL;
    if(ind == 1)
    {
        q = p->next;
        q->prev = NULL;
        p->next = NULL;
        first = q;
        free(p);
    }
    else
    {
        for(int i=0; i<ind-1; i++)
            p = p->next;
        p->prev->next = p->next;
        if(p->next != NULL)
            p->next->prev = p->prev;
        free(p);
    }
    
}
void main()
{
    int n, ind, x;
    printf("no of elements?");
    scanf("%d", &n);
    printf("\nenter all the elements:\n");
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        insert(x);
    }
    printf("\nbefore:\n");
    display();
    printf("\nenter the index to be deleted");
    scanf("%d", &ind);
    delete(ind);
    //printf("\ndeleted element = %d\n", delete(ind));
    printf("\nafter:\n");
    display();
}