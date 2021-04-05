#include <stdio.h>
struct emp
{
	char name[50];
	int empid;
	struct add
	{
		char district[20];
		int pin;
	}; 	struct add a;
};
void employ(struct emp e[]);
main()
{
	struct emp e[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter name");
		scanf("%s",&e[i].name);
		printf("enter empid");
		scanf("%d",&e[i].empid);
		printf("enter district");
		scanf("%s",e[i].a.district);
		printf("enter pin");
		scanf("%d",&e[i].a.pin);
	}
	employ(e);
}
void employ(struct emp e[])
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("%s   %d    %s   %d  \n",e[i].name,e[i].empid,e[i].a.district,e[i].a.pin);
	}
}
