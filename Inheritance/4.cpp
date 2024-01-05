//Example of multilevel inheritance
#include<iostream>
using namespace std;
class First{
	protected:
		int a;
	public:
		void get_a()
		{
			cout<<endl<<"Enter value for a: ";
			cin>>a;
		}
		void disp_a()
		{
			cout<<endl<<"Value of a: "<<a;
		}
};
class Second : public First{
	protected:
		int b;
	public:
		void get_b()
		{
			cout<<endl<<"Enter value for b: ";
			cin>>b;
		}
		void disp_b()
		{
			cout<<endl<<"Value of b: "<<b;
		}
};
class Third : public Second{
	protected:
		int c,p;
	public:
		void get_c()
		{
			cout<<endl<<"Enter value for c: ";
			cin>>c;
		}
		void disp_c()
		{
			cout<<endl<<"Value of c: "<<c;
		}
		void calc()
		{
			p=a*b*c;
			cout<<endl<<"Product: "<<p;
		}
};
int main()
{
	Third obj;
	obj.get_a();
	obj.get_b();
	obj.get_c();
	obj.disp_a();
	obj.disp_b();
	obj.disp_c();
	obj.calc();
	return 0;
}
