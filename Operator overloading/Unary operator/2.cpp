// Wap to overload ++ operator in both pre and post mode.
#include<iostream>
using namespace std;
class Count{
	private:
		int value=0;
	public:
		Count() : value(5){}
		void operator ++ ()
		{
			value+=10;
		}
		void operator ++ (int)
		{
			value+=5;
		}
		void display()
		{
			cout<<endl<<"Value : "<<value;
		}
};
int main()
{
	Count obj;
	++obj;
	obj.display();
	obj++;
	obj.display();
	return 0;
}
