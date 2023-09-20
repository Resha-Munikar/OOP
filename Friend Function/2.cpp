/*Design a C++ program with two classes Student and Marksheet. Use a friend function to
access and display student's details and marks from both classes.*/
#include<iostream>
using namespace std;
class Marksheet;
class Student{
	private:
		char name[30];
	public:
		void data()
		{
			cout<<"Enter student's name : ";
			gets(name);	
		}
		friend void details(Student,Marksheet);
}m; 
class Marksheet{
	private:
		int marks;
	public:
		void setvalue()
		{
			cout<<endl<<"Enter student's marks : ";
			cin>>marks;
		}
		friend void details(Student,Marksheet);
}n;
void details(Student x,Marksheet y)
{
	cout<<endl<<"Student's name : "<<x.name;
	cout<<endl<<"Student's marks : "<<y.marks;
}
int main()
{
	m.data();
	n.setvalue();
	details(m,n);
	return 0;
}
