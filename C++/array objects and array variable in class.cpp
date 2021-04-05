#include <iostream>
using namespace std;
class ans
{
 int sub[2];
 public:
 	void get()
 	{
 	cout<<"enter marks";
 	   for(int i=0;i<2;i++)
	   {
	 	cin>>sub[i];
       }
	}
    void put()
	{
	   for(int i=0;i<2;i++)
	   {
		cout<<sub[i];
	   }
	}
};
main()
{
ans a[2];
for(int i=0;i<2;i++)
 {
 	 a[i].get();
 }
for(int i=0;i<2;i++)
 {
 	 a[i].put();
 }	
}
