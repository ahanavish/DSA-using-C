#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
}*first =NULL;
void create(int A[], int n)
{
    struct node *t, *last;
    first = (struct node*)malloc(sizeof(struct node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data = A[i];
        t-> next = NULL;
        last->next = t;
        last = t;
    }
}
int summ(struct node *p)
{
    int sum = 0;
    while(p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
void main()
{
    int A[]={5,4,7,3,6,2,9,1,8};
    create(A,9);
    printf("sum = %d",summ(first));
}