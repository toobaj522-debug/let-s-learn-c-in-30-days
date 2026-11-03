#include<iostream>
using namespace std;
main()
{
	int num = 25;
	int *ptr = &num;
	
	cout<<num<<endl;
	cout<<ptr<<endl;  // ptr is used to store address of variable
	cout<<*ptr<<endl; // *ptr shows the value in that address
	cout<<&num<<endl; // & is also used for address
	
	return 0;


}
