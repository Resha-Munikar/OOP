//program to take a value and displaying it
#include<iostream>
using namespace std;
class Demo{
	private:
		int a;
	public:
		void getdata()
		{
			cout<<endl<<"Enter value for a: ";
			cin>>a;
		}
		void show(Demo x)
		{
			cout<<endl<<"Value of a: "<<x.a;
		}
};
int main()
{
	Demo obj;
	obj.getdata();
	obj.show(obj);
	return 0;	
}
