#include<iostream>
using namespace std;
main()
{
	int marks[5];
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter marks: "<<endl;
		cin>>marks[i];
	}
	cout<< "\n Marks are: \n"<<endl;
	
	{
		for(int i=0;i<5;i++)
		cout<<marks[i]<<endl;
	}
}
