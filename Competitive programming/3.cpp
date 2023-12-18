#include<iostream>
using namespace std;
class Complex{
	public:
		int real;
		int imag;
	Complex(int r,int i)
	{
		real=r;
		imag=i;
	}
	void operator +(Complex c)
	{
		cout<<real+c.real<<"+"<<imag+c.imag<<"i"<<endl;
	}
	void operator -(Complex c)
	{
		if(imag-c.imag>0)
			cout<<real-c.real<<"+"<<imag-c.imag<<"i"<<endl;
		else
			cout<<real-c.real<<imag-c.imag<<"i"<<endl;
	}
};
int main()
{
	Complex c1(4,5);
	Complex c2(5,6);
	c1+c2;
	c1-c2;
	return 0;
}
