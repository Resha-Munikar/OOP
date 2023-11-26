//basic to class type conversion using constructor
#include<iostream>
using namespace std;
class Time{
	private:
		int hrs,min;
	public:
		Time(int);
		void display();
};
Time::Time(int t)
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
	int duration;
	cout<<endl<<"Enter duration in minutes: ";
	cin>>duration;
	Time t1(duration);
	t1.display();
	return 0;
}

