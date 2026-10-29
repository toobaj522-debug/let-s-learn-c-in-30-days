#include<iostream>
using namespace std;
int main()
{
	string name;
	cout<<"Enter your full name: "<<endl;
	getline(cin,name);
	int search;
	bool found = false;
	
	cout<<"Enter a character for seach "<<endl;
	cin>>search;
	
	cout<<"Your full name is "<<name<<endl;
	cout<<"Number of characters "<<name.size()<<endl;
	cout<<"First character "<<name[0]<<endl;
	
	for(int i=0;i<100;i++)
	{
		if(search ==name[i])
		{
			cout<<"Found."<<endl;
			found = true;
			break;
		}
	}
	
	if(found == false)
	{
		cout<<"Found."<<endl;
	}
	
	return 0;
	
}
