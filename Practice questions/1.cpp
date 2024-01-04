//Program to concatenate 2 strings using binary operator overloading
#include<iostream>
#include<string.h>
using namespace std;
class Base{
	private:
		char a[20];
	public:
		void getdata()
		{
			cout<<endl<<"Enter first string: ";
			cin>>a;
		}
		Base operator + (Base obj)
		{
			Base temp;
			strcat(a,obj.a);
			strcpy(temp.a,a);
			return temp;
		}
		void show()
		{
			cout<<endl<<"Combined string: "<<a;
		}
};
int main()
{
	Base x,y,z;
	x.getdata();
	y.getdata();
	z=x+y;
	z.show();
	return 0;
}
