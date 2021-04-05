#include <iostream>
using namespace std;
class stu
{
	public:
	int id;
	char name;
	int sub[2];
	void get();
	void put();
};
void stu::get()
{
	cout<<"enter id,name,marks of subjects";
	cin>>id>>name;
	for(int i=0;i<2;i++)
	{
		cin>>sub[i];
	}
}
void stu::put()
{
	cout<<"id="<<id;
	cout<<"name="<<name;
	for(int i=0;i<2;i++)
	{
		cout<<"marks of subject"<<i+1<<"="<<sub[i];
	}
	cout<<endl;
}
main()
{
	stu s[2];
	for(int i=0;i<2;i++)
	{
		s[i].get();
	}
	for(int i=0;i<2;i++)
	{
		s[i].put();
	}
}
