/*Create a class Student that stores name and roll. From this class derive a class marks that stores marks
for three subjects. Then from the class marks derive a class record which stores semester and average marks
for three subjects. Create an object for a class record and display name, roll, marks in 3 subjects, semester
and average marks for a student. Assume appropriate data type.*/
#include<iostream>
#include<string.h>
using namespace std;
class Student{
	private:
		int roll;
		string name;
	public:
		void data()
		{
			cout<<endl<<"Enter roll number: ";
			cin>>roll;
			cout<<endl<<"Enter name: ";
			cin>>name;
		}
		void display_name()
		{
			cout<<endl<<"Name: "<<name;
			cout<<endl<<"Roll Number: "<<roll;
		}
};
class Marks : public Student{
	public:
		int a,b,c;
		void getmarks()
		{
			cout<<endl<<"Enter marks for c++: ";
			cin>>a;
			cout<<endl<<"Enter marks for math: ";
			cin>>b;
			cout<<endl<<"Enter marks for ds: ";
			cin>>c;
		}
		void display_marks()
		{
			cout<<endl<<"Marks in c++: "<<a;
			cout<<endl<<"Marks in math: "<<b;
			cout<<endl<<"Marks in ds: "<<c;
		}
};
class Record : public Marks{
	private:
		int sem;
		float avg_marks=0,result=0;
	public:
		void getsem()
		{
			cout<<endl<<"Enter your semester: ";
			cin>>sem;
		}
		void calc()
		{
			result=a+b+c;
			avg_marks=result/3;
		}
		void display_sem()
		{
			cout<<endl<<"Semester: "<<sem;
			cout<<endl<<"Average marks: "<<avg_marks;
		}
};
int main()
{
	Record obj;
	obj.data();
	obj.getmarks();
	obj.getsem();
	obj.display_name();
	obj.display_marks();
	obj.calc();
	obj.display_sem();
	return 0;
}
