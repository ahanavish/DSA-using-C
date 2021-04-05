#include <stdio.h>
main()
{
	int count=0,end=0,begin=0; 
	char a[]="abcde",b[5];
	printf("initially: %s \n",a);
	while(a[count]!='\0')
	{
		count++;
	}
	end=count-1;
	for(begin=0;begin<count;begin++,end--)
	{
		b[begin]=a[end];
	}
	b[begin]='\0';
	printf("after reversing: %s",b);
}
