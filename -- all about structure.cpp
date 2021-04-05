#include <stdio.h>
struct state
{
	char name[100];
	int pop;
	int lit;
	int cap;
};
void app(struct state s[]);
main()
{
	struct state s[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter state");
		scanf("%s",&s[i].name);
		printf("enter population");
		scanf("%d",&s[i].pop);
		printf("enter literacy rate");
		scanf("%d",&s[i].lit);
		printf("enter per capita");
		scanf("%d",&s[i].cap);
	}
	for(i=0;i<2;i++)
		printf("%s     %d      %d      %d  \n",s[i].name,s[i].pop,s[i].lit,s[i].cap);
	app(s);
}
void app(struct state s[])
{
	int i;
	for(i=0;i<2;i++)
	{
		if(s[i].lit>s[i+1].lit)
		printf("largest literary rate = %d",s[i].lit);
		else
		printf("largest literary rate = %d",s[i+1].lit);
		break;
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		if(s[i].cap>s[i+1].cap)
		printf("largest capita = %d",s[i].cap);
		else
		printf("largest capita = %d",s[i+1].cap);
		break;
	}
}
