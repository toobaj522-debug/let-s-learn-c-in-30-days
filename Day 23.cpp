#include<iostream>
using namespace std;
main()
{
	string name;
	cout<<"Enter your full name: "<<endl;
	getline(cin,name);
	
	cout<<name<<endl;
	
	for(int i=name.size()-1;i>=0;i--)
	{
		cout<<name[i];
	}
	
	return 0;
}
