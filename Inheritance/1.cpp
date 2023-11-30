/*WAP with class Interest where principal will be in private, rate will be in public. Now
create two child class SI and CI.SI class will be publicly inherited whereas CI class will be 
inherited in protected mode. Perform the necessary actions to calculate SI and CI
(value of p, t, r will be dynamic)*/
#include<iostream>
#include<math.h>
using namespace std;
class Interest{
	private:
		float p;
	protected:
		float t;
	public:
		float r;
	float getp()
	{
		return p;
	}
	void set()
	{
		cout<<endl<<"Enter principle: ";
		cin>>p;
		cout<<endl<<"Enter time: ";
		cin>>t;
		cout<<endl<<"Enter rate: ";
		cin>>r;
	}
};
class SI : public Interest{
	public:
		float result;
		void calc()
		{
			result = (getp()*t*r)/100;
		}
		void display()
		{
			cout<<endl<<"Simple Interest: "<<result;
		}
};
class CI: protected Interest{
	public:
		float result;
		void getvalue()
		{
			set();
		}
		void calculate()
		{
		result = getp()*pow(1+r/100,t);
		}
		void show()
		{
			cout<<endl<<"Compound Interest: "<<result;
		}
};
int main()
{
	SI obj;
	CI obj1;
	obj.set();
	obj.calc();
	obj.display();
	obj1.getvalue();
	obj1.calculate();
	obj1.show();
	return 0;
}
