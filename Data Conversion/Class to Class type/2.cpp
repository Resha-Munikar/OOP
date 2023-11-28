//Program to convert one class time into another class minute
#include<iostream>
using namespace std;
class Time{
	private:
		int hrs,min;
	public:
		Time(int a,int b)
		{
			hrs=a;
			min=b;
		}
		void display()
		{
			cout<<endl<<hrs<<" hours "<<min<<" minutes ";
		}
		int getinfo()
		{
			return(hrs*60+min);
		}
};
class Time1{
	private:
		int minutes;
	public:
		void operator = (Time obj)
		{
			minutes=obj.getinfo();
		}
		void show()
		{
			cout<<endl<<"Total time in minutes is "<<minutes;
		}
};
int main()
{
	int h,m;
	cout<<endl<<"Enter hours: ";
	cin>>h;
	cout<<endl<<"Enter minutes: ";
	cin>>m;
	Time t(h,m);
	Time1 t1;
	t.display();
	t1=t;
	t1.show();
	return 0;
}
