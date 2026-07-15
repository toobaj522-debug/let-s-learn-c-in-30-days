#include<iostream>
using namespace std;
int max(int x,int y)
{
	if(x<y)
	{
		cout<<"Number 1 is maximum"<<endl;
	}
	else
	{
		cout<<"Number 2 is maximum"<<endl;
	}
}

main()
{
	int x,y;
	
	cout<<"Enter Number 1: "<<endl;
	cin>>x;
	
	cout<<"Enter Number 2: "<<endl;
	cin>>y;
	
	max(x,y);
	
	
		cout<<"Number is bigger: "<<max(x,y)<<endl;
	
	
	return 0;
}
