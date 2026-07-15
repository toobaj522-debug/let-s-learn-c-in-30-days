#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char oper;
	 
	cout<<"enter one numbers = ";
	cin>>num1;
	cout<<"enter second numbers = ";
    cin>>num2;
    cout<<"enter any operator = ";
    cin>>oper;
     
    switch(oper)
    {
    	case '+' :
    		cout<< "RESULT " <<num1 + num2;
    		break;
    	case '-' :
		    cout<< "RESULT " <<num1 - num2;
		    break;
    	case '*' :
		    cout<< "RESULT " <<num1 * num2;
		    break;
    	case '/' :
		    cout<< "RESULT " <<num1 / num2;
		    break;
    	case '%' :
		    cout<< "RESULT "
			<<num1 % num2;
		    break;
        default:
        	cout<< "Invalid Operator";
	}

	
	


}
