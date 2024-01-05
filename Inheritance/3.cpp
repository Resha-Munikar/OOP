//Example of multiple inheritance
#include<iostream>
using namespace std;
class First{
	protected:
		int a;
	public:
		void get_a()
		{
			cout<<endl<<"Enter value for a : ";
			cin>>a;
		}
		void out()
		{
			cout<<endl<<"Value of a: "<<a;
		}
};
class Second{
	protected:
		int b;
	public:
		void get_b()
		{
			cout<<endl<<"Enter value for b: ";
			cin>>b;
		}
		void show()
		{
			cout<<endl<<"Value of b: "<<b;
		}
};
class Third : public First, public Second
{
	private:
		int c,p;
	public:
		void get_c()
		{
			cout<<endl<<"Enter value for c: ";
			cin>>c;
		}
		void play()
		{
			cout<<endl<<"Value of c: "<<c;
		}
		void calc()
		{
			p=a*b*c;
		}
		void display()
		{
			cout<<endl<<"Product: "<<p;
		}
};
int main()
{
	Third obj;
	obj.get_a();
	obj.get_b();
	obj.get_c();
	obj.out();
	obj.show();
	obj.play();
	obj.calc();
	obj.display();
	return 0;
}
