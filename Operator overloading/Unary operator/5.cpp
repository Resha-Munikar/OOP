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
		void operator ++ (int)
		{
			num=num+5;
		}
		void display()
		{
			cout<<endl<<"The final result is : "<<num;
		}
		void result()
		{
			cout<<endl<<"Number before conversion : "<<num;
		}
};
int main()
{
	Resha obj;
	obj.getvalue();
	obj.result();
	obj++;
	obj.display();
	return 0;
}
