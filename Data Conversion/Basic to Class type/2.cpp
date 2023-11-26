//Basic to class type conversion using operator overloading
#include<iostream>
using namespace std;
class Time{
	private:
		int hrs,min;
	public:
		void operator =(int);
		void display();
};
void Time::operator =(int t)
{
	hrs=t/60;
	min=t%60;
}
void Time::display()
{
	cout<<endl<<hrs<<" hour(s) "<<min<<" minutes";
}
int main()
{
	Time t1;
	int duration;
	cout<<endl<<"Enter duration in minutes: ";
	cin>>duration;
	t1.operator=(duration);
	t1.display();
	return 0;
}
