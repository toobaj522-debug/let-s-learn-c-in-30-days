#include<iostream>
using namespace std;
int max(int x,int y)
{
	if(x < y)
	return y;
	else
	return x;
}
main()
{
	int x,y;
	
	cout<<"Enter value for number 1: "<<endl;
	cin>>x;
	
	cout<<"Enter value for number 2: "<<endl;
	cin>>y;
	
	cout<<"This number is bigger: "<<max(x,y)<<endl;
	return 0;
}
