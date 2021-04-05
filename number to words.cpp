#include <string.h>
//https://www.youtube.com/watch?v=PZl7F5EudjY
#include <stdio.h>
main()
{
	char a[20];                            //no is taken as a string and not integer
	char *single[]={"zero","one","two","three","four","five","six","seven","eight","nine"}; //string pointer :if 2 is given in the index, two will be printed 
	char *doubles[]={"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","nineteen"};  //sum of both digits is considered(eg:15=6 therefore 6th index)
	char *tens[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};    //index dependent on a[0] or else sum of both digits
	printf("enter a number\n");               // max digits=4
	scanf("%s",a);
	
	int len= strlen(a);
	int num;
	
	if(len==1)                                
	{                                            // string can be pointed using num=*a -'0'
		num=a[0] - 48;               //since single digit no, hence it will be present at index 0
		printf("%s",single[num]);
	}
	
	if(len ==2 && a[0]==49)            //if at tens place, 1 is present then it will take string from doubles
	{
		num=(a[0] - 48) + (a[1] - 48);
		printf("%s",doubles[num]);
	}
	
	else
		if(len ==2 && a[1]==48)            //if at tens place, other than 1 is present as well as at ones place,0 is present then it will take string from tens
		{
			num=(a[0] - 48) + (a[1] - 48);
			printf("%s",tens[num]);
		}
		
		else
			if(len==2)
			{
			num=a[0]-48;
			printf("%s ",tens[num]);
			num=a[1] - 48;
			printf("%s",single[num]);
			}
	
if(len ==3)
{
	num=a[0]-48;
	printf("%s hundred ",single[num]);
	num=a[1]-48;
	printf("%s ",tens[num]);
	num=a[2] - 48;
	printf("%s",single[num]);
}

if(len ==4)
{
	num=a[0]-48;
	printf("%s thousand ",single[num]);
	num=a[1]-48;
	printf("%s hundred ",single[num]);
	num=a[2]-48;
	printf("%s ",tens[num]);
	num=a[3] - 48;
	printf("%s",single[num]);
}
}
