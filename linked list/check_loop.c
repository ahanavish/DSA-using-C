#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*first = NULL;
void create(int A[], int n)
{
    struct node *t, *last;
    first = (struct node*)malloc(sizeof(struct node));
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
void display()
{
    struct node *p = first;
    while(p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
int loop()
{
    struct node *p = first, *q = first;
    do
    {
        p = p->next;
        q = q->next;
        if(q != NULL)
            q = q->next;
    }while(p && q && p!=q);

    if(p == q)
        return 1;
    else 
        return 0;

}
void main()
{
    int A[]={1,2,3,4,5};
    create(A, 5);
    
    /*struct node *t1, *t2;                       //making loop
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;*/

    if(loop(first) == 1)
        printf("\nloop");
    else
        printf("\nlinear");
}