#include<iostream>
using namespace std;
main()
{
	int marks[5]={10,20,30,40,50};
	int largest=marks[0];
	
	for(int i=0;i<5;i++)
	{
		if(marks[i]>largest)
		{
			cout<<" Greatest marks are: "<<marks[i]<<endl;
		}
		else
		{
			cout<<"Greatest marks are: "<<largest<<endl;
		}
	}
	
	return 0;
}
