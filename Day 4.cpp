#include<iostream>
using namespace std;
main()
{
	int age;
	string gender;
	
	cout<<"Enter your age?"<<endl;
	cin>>age;
	
	cout<<"Enter your gender?"<<endl;
	cin>>gender;
	
	if(age>=18 && gender=="female" || gender=="Female")
	{
		cout<<"You are eligible"<<endl;
	}
	else
	{
		cout<<"You can't vote"<<endl;
	}
	return 0;

}
