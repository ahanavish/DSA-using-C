#include <iostream>
using namespace std;
main()
{
	int n;
	int *p=new int [n];
	cout<<"enter array size";
	cin>>n;
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>*(p+i);               //cin>>p[i];              
	}
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i);            //cout<<p[i];
	}
}
