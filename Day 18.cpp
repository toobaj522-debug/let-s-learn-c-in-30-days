#include<iostream>
using namespace std;
main()
{
	int marks[5]={10,15,11,8,20};
	int largest=marks[0];
	
	
   for(int i=0;i<5;i++)
{
    if(marks[i]>largest)
    {
    	largest = marks[i];
    }
   
}
     cout<<" Greatest marks are: "<<largest<<endl;	
}


