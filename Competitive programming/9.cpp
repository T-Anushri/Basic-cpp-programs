#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	ofstream outf("oop");
	outf<<a<<" + "<<b<<"i"<<"\n";
	outf<<a+c<<" + "<<b<<"i"<<"\n";
	outf<<2*a+c<<" + "<<2*b<<"i"<<"\n";
	outf.close();
	return 0;
}

