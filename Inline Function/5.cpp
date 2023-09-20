//Write a C++ program with an inline function to calculate the volume of a sphere given its radius.
#include<iostream>
#include<math.h>
using namespace std;
inline void calc(float r)
{
	float volume=0;
	volume=1.33*3.14*pow(r,3);
	cout<<endl<<"Volume of sphere is : "<<volume;
}
int main()
{
	float radius=0;
	cout<<"Enter radius : ";
	cin>>radius;
	calc(radius);
	return 0;
}
