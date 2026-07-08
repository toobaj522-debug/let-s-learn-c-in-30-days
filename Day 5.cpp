#include<iostream>
using namespace std;
main()
{
	int marks;
	
	cout<<"Enter your marks:"<<endl;
	cin>>marks;
	
	if(marks>=90)
	{
		cout<<"Your grade is A"<<endl;
	}
	
	else if(marks>=80)
	{
		cout<<"Your grade is B"<<endl;
	}
	
	else if(marks>=70)
	{
		cout<<"Your grade is C"<<endl;
	}
	
	else if(marks>=60)
	{
		cout<<"Your grade is D"<<endl;
	}
	
	else if(marks>=50)
	{
		cout<<"You are pass"<<endl;
	}
	
	else 
	{
		cout<<"You are fail"<<endl;
	}
	return 0;
}
