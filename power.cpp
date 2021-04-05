#include <stdio.h>
int pow(int n,int p)
{
	if(p==0)
		return 1;
	else if(p%2==0)
		return pow(n*n,p/2);
		else
            return n*pow(n*n,p/2);
}
int main()
{
    int n,p;
    printf("enter a number & power");
    scanf("%d %d",&n,&p);
	printf("%d",pow(n,p));
	return 0;
}
