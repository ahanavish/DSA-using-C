#include <stdio.h>
main()
{
FILE *p;
char ch;
p=fopen("file.txt","r");
ch=getc(p);
while(ch!=EOF)
{
	printf("%c",ch);
	ch=getc(p);
}
fclose(p);
}

