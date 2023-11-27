//class to basic type conversion
#include<iostream>
using namespace std;
class Time{
	private:
		int hrs,min;
	public:
		operator int();
		Time(int,int);
};
Time::Time(int a,int b)
{
	hrs=a;
	min=b;
}
Time::operator int()
{
	return(hrs*60+min);
}
int main()
{
	int h,m,duration;
	cout<<endl<<"Enter hours: ";
	cin>>h;
	cout<<endl<<"Enter minutes: ";
	cin>>m;
	Time t(h,m);
	duration=t;
	cout<<endl<<"Total time in minutes is: "<<duration;
	return 0;
}

