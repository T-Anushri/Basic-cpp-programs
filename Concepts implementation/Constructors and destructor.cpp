#include<iostream>
#include<stdlib.h>
using namespace std;
class complex
{
	public:
		int a,b;
		complex()
		{
			a = 0;
			b = 1;
		}
		complex(int m, int n)
		{
			a = m;
			b = n;
		}
		complex(complex &c)
		{
			a = c.a;
			b = c.b;
		}
		~complex()
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{
	complex c1;
	cout<<"Using default constructor, Complex number: "<<c1.a<<"+"<<"i"<<c1.b<<endl;
	complex c2(4,8);
	cout<<"Using parametric constructor, Complex number: "<<c2.a<<"+"<<"i"<<c2.b<<endl;
	complex c3(c2);
	cout<<"Using copy constructor, Complex number: "<<c3.a<<"+"<<"i"<<c3.b<<endl;
	return 0;
}
