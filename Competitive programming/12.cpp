#include<iostream>
using namespace std;
class Complex
{
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
		if(imag+c.imag>0)
			cout<<real+c.real<<" + "<<imag+c.imag<<"i"<<endl;
		else
			cout<<real+c.real<<imag+c.imag<<"i"<<endl;
	}
};
int main()
{
	int t,r,i;
	cin>>t;
	while(t--)
	{
		cin>>r>>i;
		Complex c1(r,i);
		cin>>r>>i;
		Complex c2(r,i);
		c1+c2;
	}
}
