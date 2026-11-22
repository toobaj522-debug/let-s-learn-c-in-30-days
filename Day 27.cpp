#include<iostream>
using namespace std;
class Student
{
	public:
		int age;
		string name;
		float GPA;
		
		
};
int main()
{
	Student S1;
	S1.name ="Tooba";
	S1.age = 20;
	S1.GPA = 2.96;
	
	cout<<S1.name<<endl;
	cout<<S1.age<<endl;
	cout<<S1.GPA<<endl;
	
	
	return 0;
}

