//WAP to ask user to enter time in second and convert into hours, minutes and seconds
//using operator overloading
#include<iostream>
using namespace std;
class Time{
	private:
		int hrs,min,sec,rem;
	public:
		void operator=(int);
		void display();
};
void Time::operator=(int t)
{
	hrs=t/3600;
	rem=t%3600;
	min=rem/60;
	sec=rem%60;
}
void Time::display()
{
	cout<<endl<<hrs<<" hour(s) "<<min<<" minutes "<<sec<<" seconds ";
}
int main()
{
	int duration;
	cout<<endl<<"Enter duration in seconds : ";
	cin>>duration;
	Time t1;
	t1.operator=(duration);
	t1.display();
	return 0;
};
