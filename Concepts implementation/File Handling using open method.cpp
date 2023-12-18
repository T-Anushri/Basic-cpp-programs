#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outf;
	outf.open("COUNTRY");
	outf<<"India\n";
	outf<<"United Kingdom\n";
	outf<<"United States of America";
	outf.close();
	outf.open("CAPITAL");
	outf<<"Delhi\n";
	outf<<"London\n";
	outf<<"Washington";
	outf.close();
	const int N=80;
	char line[N];
	ifstream inf;
	inf.open("COUNTRY");
	cout<<"Contents of country file:"<<endl;
	while(inf)
	{
		inf.getline(line,N);
		cout<<line<<endl;
	}
	inf.close();
	inf.open("CAPITAL");
	cout<<"Contents of capital file:"<<endl;
	while(inf)
	{
		inf.getline(line,N);
		cout<<line<<endl;
	}
	inf.close();
	return 0;
}
