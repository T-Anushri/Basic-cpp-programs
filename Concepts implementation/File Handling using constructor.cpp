#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[30];
	float cost;
	cout<<"Enter name of the item:";
	cin>>name;
	cout<<"Enter cost of the item:";
	cin>>cost;
	ofstream outf("ITEM");
	outf<<name<<"\n";
	outf<<cost;
	outf.close();
	ifstream inf("ITEM");
	inf>>name;
	inf>>cost;
	cout<<"Name of the item is:"<<name<<endl;
	cout<<"Cost of the item is:"<<cost;
	inf.close();
	return 0;
}
