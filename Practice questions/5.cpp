//find largest number using template
#include<iostream>
using namespace std;
template<class T>
class Base{
	private:
		T a;
		T b;
		T c;
	public:
		Base(T x,T y,T z)
		{
			a=x;
			b=y;
			c=z;
		}
		void calc()
		{
			if(a>b)
			{
				if(a>c)
				{
					cout<<endl<<"A is largest.";
				}
				else
				{
					cout<<endl<<"C is largest.";
				}
			}
			else
			{
				if(b>c)
				{
					cout<<endl<<"B is largest.";
				}
				else
				{
					cout<<endl<<"C is largest.";
				}
			}
		}
};
int main()
{
	Base<int> obj(35,10,3);
	obj.calc();
	return 0;
}
