#include <iostream>
using namespace std;

class Book
{
	public:
	int id;
	string title;
	float price;
	
	Book()
	{
		id=0;
		title="unknown";
		price=0;
	}
	Book(int i,string t,float p)
	{
		id=i;
		title=t;
		price=p;
	}
	void display()
	{
	cout<<"Book ID:"<<id<<endl;
	cout<<"Book Title:"<<title<<endl;
	cout<<"Book price:"<<price<<endl;
	}
};

int main()
{
		Book b1;
		Book b2(210,"python",500);
		
		cout<<"Book 1:"<<endl;
		b1.display();
		
		cout<<"Book 2:"<<endl;
		b2.display();
		
		return 0;
}
