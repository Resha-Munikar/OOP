#include<iostream>
using namespace std;
class Resha{
	private:
		int num;
	public:
		void getvalue()
		{
			cout<<"Enter a number : ";
			cin>>num;
		}
		void operator ++ ()
		{
			num=num+5;
		}
		void display()
		{
			cout<<"The final result is : "<<num;
		}
};
int main()
{
	Resha obj;
	obj.getvalue();
	++obj;
	obj.display();
	return 0;
}
