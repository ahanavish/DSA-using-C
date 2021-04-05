//1!/1+2!/2+3!/3+4!/4+5!/5
#include <stdio.h>
int summ(int);
int fact(int);
void main()
{
    int sum;
    sum = summ(5);
    printf("%d", sum);
}
int summ(int n)
{
    if(n==1)
        return 1;
    int factt = fact(n)/n;
    return factt + summ(n-1);
}
int fact(int no)
{
    if(no==1)
        return 1;
    return no*fact(no-1);
}