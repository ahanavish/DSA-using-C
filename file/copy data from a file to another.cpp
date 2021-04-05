#include <stdio.h>
main()
{
	FILE *p,*p1;
	p=fopen("file.txt","r");
	p1=fopen("file1.txt","w");
	char ch;
	ch=fgetc(p);
	if(p==NULL)
	printf("file doesnt exist ");
	while(ch!=EOF)
	{
		fputc(ch,p1);
		ch=fgetc(p);
	}
}
