//Program to identify the work of constructor and destructor
#include<iostream>
using namespace std;
class Test{
	public:
		Test()
		{
			cout<<endl<<"Parent class constructor.";
		}
		~Test()
		{
			cout<<endl<<"Parent class destructor.";
		}
};
class Try : public Test
{
	public:
		Try()
		{
			cout<<endl<<"Child class constructor.";
		}
		~Try()
		{
			cout<<endl<<"Child class destructor.";
		}
};
int main()
{
	Try obj;
	return 0;
}
