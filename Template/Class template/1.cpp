/*WAP using concept of class template to calculate area of two rectangular room.
First room : length=10 Breadth=5
Second room : length=10.5 Breadth=5.5*/
#include<iostream>
using namespace std;
template<class T>
class Area{
	private:
		T length;
		T breadth;
		T result;
	public:
		Area(T a,T b)
		{
			length=a;
			breadth=b;
		}
		void calc()
		{
			result = length*breadth;
		}
		void show()
		{
			cout<<endl<<"Area of a room: "<<result;
		}
};
int main()
{
	Area<int> obj(10,5);
	obj.calc();
	obj.show();
	Area<float> obj1(10.5,5.5);
	obj1.calc();
	obj1.show();
	return 0;
}
