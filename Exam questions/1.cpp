//Program to overload + operator to concatenate two input strings
#include<iostream>
#include<string.h>
using namespace std;
class String{
	public:
		char str1[30];
		void set()
		{
			fflush(stdin);
			cout<<endl<<"Enter a string: ";
			cin.getline(str1,30);
		}
		String operator + (String s)
		{
			String obj;
			strcat(str1,s.str1);
			strcpy(obj.str1,str1);
			return obj;
		}
		void display()
		{
			cout<<endl<<"Concatenated string: "<<str1;
		}
};
int main()
{
	String obj1,obj2,obj3;
	obj1.set();
	obj2.set();
	obj3=obj1 + obj2;
	obj3.display();
	return 0;
}
