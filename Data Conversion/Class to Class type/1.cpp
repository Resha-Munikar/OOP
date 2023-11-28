//Program to convert one class to another class
#include<iostream>
using namespace std;
class Inventory1{
	private:
		int ino,qty;
		float rate;
	public:
		Inventory1(int a,int b,float c)
		{
			ino=a;
			qty=b;
			rate=c;
		}
		void display()
		{
			cout<<endl<<"Item number: "<<ino;
			cout<<endl<<"Quantity: "<<qty;
			cout<<endl<<"Rate: "<<rate;
		}
		int getinfo()
		{
			return ino;
		}
		float getamt()
		{
			return(qty*rate);
		}
};
class Inventory2{
	private:
		int ino;
		float amount;
	public:
		void operator = (Inventory1 I)
		{
			ino=I.getinfo();
			amount=I.getamt();
		}
		void display()
		{
			cout<<endl<<"Item number: "<<ino;
			cout<<endl<<"Amount: "<<amount;
		}
};
int main()
{
	Inventory1 i1(5,10,25);
	Inventory2 i2;
	i2=i1;
	i1.display();
	i2.display();
	return 0;
}
