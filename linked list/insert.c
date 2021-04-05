#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node* next;
}*first = NULL;
void create(int A[], int n)
{
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(int i=1; i<n; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void insert(int no, int pos)
{
    struct node *t, *p;
    if(pos == 0)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = no;
        t->next = first;
        first = t;
    }
    else if(pos>0)
        {
            p = first;
            for(int i=0; i<pos - 1 && p; i++)
                p=p->next;
            if(p)
            {
                t = (struct node*)malloc(sizeof(struct node));
                t->data = no;
                t->next = p->next;
                p->next = t;
            }
        }
}
void display(struct node *p)
{
    printf("elements are:\n");
    while(p!=NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
void main()
{
    int A[]={2,5,3,7};
    create(A,4);
    printf("\nbefore\n");
    display(first);
    int no, pos;
    printf("\nenter the no to be inserted and at which position:\n");
    scanf("%d%d",&no,&pos);
    insert(no, pos);
    printf("\nafter inserting:\n");
    display(first);
}