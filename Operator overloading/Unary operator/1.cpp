/*WAP to overload ++ operator in both pre and post mode.
The condition is given below:
There is a class representing a complex number. Defina a constructor to initialize the complex number
and provide a member function to display the complex number. Demonstrate prefix/postfix increment 
opertor overloading by creating an instance of complex number and then incrementing both real and 
imagnary by 5. */
#include<iostream>
using namespace std;
class Complex_number{
	private:
		int x=0,y=0;
	public:
		Complex_number()
		{
			x=4;
			y=5;
		}
		void operator ++()
		{
			x+=5;
			y+=5;
		}
		void operator ++(int)
		{
			x+=5;
			y+=5;
		}
		void display()
		{
			cout<<endl<<"Complex Number : ";
			cout<<""<<x;
			cout<<"+i";
			cout<<""<<y;
		}
}obj;
int main()
{
	++obj;
	obj.display();
	obj++;
	obj.display();
	return 0;
}
