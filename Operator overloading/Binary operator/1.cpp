#include<iostream>
using namespace std;
class Complex{
	private:
		int real;
		int imag;
	public:
		void getvalue()
		{
			cout<<endl<<"Enter value for real part :";
			cin>>real;
			cout<<endl<<"Enter value for imaginary part :";
			cin>>imag;
		}
		Complex operator + (const Complex &obj)
		{
			Complex temp;
			temp.real = real + obj.real;
			temp.imag = imag + obj.imag;
			return temp;
		}
		void display()
		{
			cout<<real<< "+i" <<imag;
		}
};
int main()
{
	Complex complex1,complex2;
	Complex result;
	cout<<endl<<"Enter first complex number";
	complex1.getvalue();
	cout<<endl<<"Enter second complex number";
	complex2.getvalue();
	result = complex1 + complex2;
	cout<<endl<<"The sum of two complex number is : ";
	result.display();
	return 0;	
}
