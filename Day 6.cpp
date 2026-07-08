#include<iostream>
using namespace std;
main()
{
	int num;
	
	cout<<"Enter your number:"<<endl;
	cin>>num;
	
	if(num>0)
	{
		if(num%2==0)
		{
			cout<<"NUMBER IS POSITIVE AND EVEN"<<endl;
		}
		else
		{
			cout<<"NUMBER IS POSITIVE AND ODD"<<endl;
		}
    }
    
    else if(num<0)
    {
    	if(num%2==0)
    	{
		cout<<"NUMBER IS NEGATIVE AND EVEN"<<endl;
		}
		else
		{
		cout<<"NUMBER IS NEGATIVE AND ODD"<<endl;
		}
    	
	}
	
	else
	{
		cout<<"NUMBER IS ZERO"<<endl;
	}
	return 0;
	
		
	}
