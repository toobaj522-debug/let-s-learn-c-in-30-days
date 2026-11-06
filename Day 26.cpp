#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file("Student.txt");
	
	file<<"My name is Tooba."<<endl;
	file<<"My age is 22."<<endl;
	file<<"My city is Lahore."<<endl;
	
	file.close();
	
	return 0;
}
