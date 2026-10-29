#include<iostream>
using namespace std;
main()
{
	int arr[5]={10,20,30,40,50};
	int search;
	bool found = false;
	cout<<"Enter number for search."<<endl;
	cin>>search;
	
	for(int i=0;i<5;i++)
	{
	if(arr[i]==search)
	{
		cout<<"Number found at index  "<<i<<endl;
		found = true;
		break;
		
	}
		
	}
	
	if(found == false)
	{
        cout<<"Number not found. "<<endl;
	}
	
	
}
