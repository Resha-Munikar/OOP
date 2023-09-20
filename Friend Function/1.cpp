/*Create a C++ class representing a Circle with private data members for radius.
Implement a friend function calculateArea that calculates and returns the area of a 
circle.*/
#include<iostream>
using namespace std;
class Circle{
	private:
		int radius;
	public:
		void getvalue()
		{
			cout<<"Enter radius : ";
			cin>>radius;
		}
		friend float calculateArea(Circle);
};
float calculateArea(Circle x)
{
		float area;
		area=3.14*x.radius*x.radius;
		return area;
}
int main()
{
	float result;
	Circle obj;
	obj.getvalue();
	result=calculateArea(obj);
	cout<<endl<<"Area of a circle is :"<<result;
	return 0;
}

