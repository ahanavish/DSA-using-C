#include <stdio.h>
main()
{
	char arr[8]="abcd", arr1[]="efgh";
	int i=0,j=0;
	printf("first string: %s \n",arr);
	while(arr[i]!='\0')
	{
		++i;                  //to count length
	}
	printf("length=%d \n",i);
	printf("second string: %s \n",arr1);
	while(arr1[j]!='\0')
	{
		arr[i]=arr1[j];                //i is not equal to 0 but j=0
		++j;
		++i;
	}
	arr[i]='\0';                         //so that string knows its end
	printf("after concatenation: %s \n",arr);
	printf("total length = %d",i);
}
