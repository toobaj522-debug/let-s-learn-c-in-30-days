#include<iostream>
using namespace std;
main()
{
	class Book
	{
		public:
		string title;
		string author;
		float price;
		
		Book(string t,string a,float p)
		{
			title = t;
			author = a;
			price = p;
		}
	};
	
	Book B1("Just kids","Patti Smith",268.98);
	
	cout<<B1.author<<" "<<B1.title<<" "<<B1.price<<endl;
	

	
	return 0;
}
