/*Develop a C++ program that uses the new operator to create an object of a user-defined class 
and then deletes it using delete.*/
#include<iostream>
using namespace std;
class Info{
	private:
		char name[30];
		int age;
	public:
		void getdata()
		{
			cout<<endl<<"Enter name : ";
			gets(name);
			cout<<endl<<"Enter age : ";
			cin>>age;
		}
		void display()
		{
			cout<<endl<<"Name : "<<name;
			cout<<endl<<"Age : "<<age;
		}
};
int main()
{
	Info *ptr;
	ptr=new Info();
	ptr->getdata();
	ptr->display();
	delete ptr;
	return 0;
}

