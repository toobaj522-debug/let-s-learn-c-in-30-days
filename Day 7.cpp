#include<iostream>
using namespace std;
main()
{
	string gender;
	int age;
	
	cout<<"Enter your age: "<<endl;
	cin>>age;
	
	cout<<"Enter your gender: "<<endl;
	cin>>gender;
	
	if( age= 18)
	{
		if(gender == "Female")
		{
		cout<<"You are eligible to vote."<<endl;
	    }
		
		else
		{
		cout<<"You can't vote"<<endl;
		}

	}
	
	else
	{
		cout<<"You are too young for this"<<endl;
	}
	return 0;
}
