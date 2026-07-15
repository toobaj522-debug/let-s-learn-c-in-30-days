#include<iostream>
using namespace std;
int add(int x, int y)
{
	return x+y;
}

main()
{
	int x,y;
	cout<<"Enter value for x: "<<endl;
	cin>>x;
	
	cout<<"Enter value for y: "<<endl;
	cin>>y;
	
	add(x,y);
	
	cout<<"Sum is "<<add(x,y)<<endl;
	
	return 0;
}
