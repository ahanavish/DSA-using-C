#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct term
{
    int coeff;
    int exp;
};
struct poly
{
    int n;
    struct term *t;
};
void poly(struct poly *p)
{
    p->t=(struct term*)malloc(p->n*sizeof(struct term));
    printf("enter terms(coefficients and power on x)");
    for(int i=0; i<p->n; i++)
        scanf("%d %d",&p->t[i].coeff,&p->t[i].exp);
}
struct poly* add(struct poly p1, struct poly p2)
{
    struct poly *p3;
    p3=(struct poly*)malloc(sizeof(struct poly));
    p3->t=(struct term*)malloc((p1.n+p2.n)*sizeof(struct term));
    int i=0, j=0, k=0;
    while(i<p1.n && j<p2.n)
        if(p1.t[i].exp > p2.t[j].exp)
            p3->t[k++] = p1.t[i++];
        else if(p1.t[i].exp < p2.t[j].exp)
                p3->t[k++] = p2.t[j++];
            else
            {
                p3->t[k].exp = p1.t[i].exp;
                p3->t[k++].coeff = p1.t[i++].coeff + p2.t[j++].coeff;
            }
    
    for(;i<p1.n;i++)
        p3->t[k++]=p1.t[i];
    for(;j<p2.n;j++)
        p3->t[k++]=p2.t[j];
    p3->n=k;
    return p3;
}
void display(struct poly p)
{
    printf("\ncoeff:\t");
    for(int i=0; i<p.n; i++)
        printf("%d\t",p.t[i].coeff);
    printf("\nexp:\t");
    for(int i=0; i<p.n; i++)
        printf("%d\t",p.t[i].exp);
    printf("\n");
}
void value(struct poly p, int x)
{
    int sum=0;
    for(int i=0; i<p.n; i++)
        sum += p.t[i].coeff*pow(x,p.t[i].exp);
    printf("value of polynomial= %d",sum);
}
void main()
{
    printf("adding two polynomials and then giving its value\n");
    struct poly p1,p2,*p3;
    printf("enter no of terms for the 1st polynomial: ");
    scanf("%d",&p1.n);
    p1.t=(struct term*)malloc(p1.n*sizeof(struct term));
    poly(&p1);

    printf("enter no of terms for the 2nd polynomial");
    scanf("%d",&p2.n);
    p2.t=(struct term*)malloc(p2.n*sizeof(struct term));
    poly(&p2);
    p3= add(p1,p2);
    display(p1);
    display(p2);
    display(*p3);               

    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    value(*p3,x);
}