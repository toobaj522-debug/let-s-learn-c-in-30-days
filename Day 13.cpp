#include<iostream>
using namespace std;
main()
{
	int i,j;
	
	for(i=4;i>=1;i--)  // rows
	{
		for(j=1;j<=i;j++)   // columns
		{
           cout<<"*";
        }
        
        cout<<endl;
	}
	
}
