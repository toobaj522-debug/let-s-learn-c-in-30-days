#include<iostream>
using namespace std;
main()
{
	int num=65;
	int guess;
	
	do
	{
		cout<<"Enter  your guess: "<<endl;
		cin>>guess;
	}
	
	 while(guess!=num);
	{
		cout<<"Congratulations, You won."<<endl;
	}
	return 0;
}
