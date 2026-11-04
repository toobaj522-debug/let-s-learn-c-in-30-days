#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	string father_name;
	int roll_no;
	int age;
	char gender;
	string department;
	int semester_no;
	float GPA;
	string city;
	string phone_no;
	
};
main()
{
	Student S1,S2,S3;
	
	cout<<"========== STUDENT 1 =========="<<endl;
	cout<<"Enter student name: "<<endl;
	getline(cin,S1.name);
	cout<<"Enter father's name: "<<endl;
	getline(cin,S1.father_name);
	cout<<"Enter roll number:"<<endl;
	cin>>S1.roll_no;
	cout<<"Enter age:"<<endl;
	cin>>S1.age;
	cout<<"Enter gender:  (Enter M for male and F for Female)"<<endl;
	cin>>S1.gender;
	cin.ignore();
	cout<<"Enter department: "<<endl;
	getline(cin,S1.department);
	cout<<"Enter semester:"<<endl;
	cin>>S1.semester_no;
	cout<<"Enter GPA:"<<endl;
	cin>>S1.GPA;
	cout<<"Enter city: "<<endl;
	cin>>S1.city;
	cin.ignore();
	cout<<"Enter phone number: "<<endl;
	getline(cin,S1.phone_no);
	
	
	cout<<"========== STUDENT 2 =========="<<endl;
	cout<<"Enter student name: "<<endl;
	getline(cin,S2.name);
	cout<<"Enter father's name: "<<endl;
	getline(cin,S2.father_name);
	cout<<"Enter roll number:"<<endl;
	cin>>S2.roll_no;
	cout<<"Enter age:"<<endl;
	cin>>S2.age;
	cout<<"Enter gender:  (Enter M for male and F for Female)"<<endl;
	cin>>S2.gender;
	cin.ignore();
	cout<<"Enter department: "<<endl;
	getline(cin,S2.department);
	cout<<"Enter semester:"<<endl;
	cin>>S2.semester_no;
	cout<<"Enter GPA:"<<endl;
	cin>>S2.GPA;
	cout<<"Enter city: "<<endl;
	cin>>S2.city;
	cin.ignore();
	cout<<"Enter phone number: "<<endl;
	getline(cin,S2.phone_no);
	
	
	cout<<"========== STUDENT 3 =========="<<endl;;
	cout<<"Enter student name: "<<endl;
	getline(cin,S3.name);
	cout<<"Enter father's name: "<<endl;
	getline(cin,S3.father_name);
	cout<<"Enter roll number:"<<endl;
	cin>>S3.roll_no;
	cout<<"Enter age:"<<endl;
	cin>>S3.age;
	cout<<"Enter gender:  (Enter M for male and F for Female)"<<endl;
	cin>>S3.gender;
	cin.ignore();
	cout<<"Enter department: "<<endl;
	getline(cin,S2.department);
	cout<<"Enter semester:"<<endl;
	cin>>S3.semester_no;
	cout<<"Enter GPA:"<<endl;
	cin>>S3.GPA;
	cout<<"Enter city: "<<endl;
	cin>>S3.city;
	cin.ignore();
	cout<<"Enter phone number: "<<endl;
	getline(cin,S3.phone_no);
	
	
	
	cout<<"========== STUDENT 1 =========="<<endl;
	cout<<"Name: "<<S1.name<<endl;
	cout<<"Father's name: "<<S1.father_name<<endl;
	cout<<"Roll number:"<<S1.roll_no<<endl;
	cout<<"Age:"<<S1.age<<endl;
	cout<<" Gender: "<<S1.gender<<endl;
	cout<<"Department: "<<S1.department<<endl;
	cout<<"Semester:"<<S1.semester_no<<endl;
	cout<<"GPA:"<<S1.GPA<<endl;
	cout<<"City: "<<S1.city<<endl;
	cout<<"Phone number: "<<S1.phone_no<<endl;
	
	cout<<"========== STUDENT 2 =========="<<endl;
	cout<<"Name: "<<S2.name<<endl;
	cout<<"Father's name: "<<S2.father_name<<endl;
	cout<<"Roll number:"<<S2.roll_no<<endl;
	cout<<"Age:"<<S2.age<<endl;
	cout<<"Gender:"<<S2.gender<<endl;
	cout<<"Department: "<<S2.department<<endl;
	cout<<"Semester:"<<S2.semester_no<<endl;
	cout<<"GPA:"<<S2.GPA<<endl;
	cout<<"City: "<<S2.city<<endl;
	cout<<"Phone number: "<<S2.phone_no<<endl;
	
	cout<<"========== STUDENT 3 =========="<<endl;
	cout<<"Name: "<<S3.name<<endl;
	cout<<"Father's name: "<<S3.father_name<<endl;
	cout<<"Roll number:"<<S3.roll_no<<endl;
	cout<<"Age:"<<S3.age<<endl;
	cout<<"Gender: "<<S3.gender<<endl;
	cout<<"Department: "<<S3.department<<endl;
	cout<<"Semester:"<<S3.semester_no<<endl;
	cout<<"GPA:"<<S3.GPA<<endl;
	cout<<"City: "<<S3.city<<endl;
	cout<<"Phone number: "<<S3.phone_no<<endl;
	
	return 0;
	
	
}

