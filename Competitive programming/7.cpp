#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int main()
{
	ofstream outf;
	outf.open("bank");
	double p,emi1=0,emi2=0,t;
	cout<<"Enter the principal amount: ";
	cin>>p;
	outf<<"Principal amount: "<<p;
	cout<<"Enter the tenure in years: ";
	cin>>t;
	outf<<"\nTenure in years: "<<t;
	int n1,n2;
	cout<<"Enter number of slabs for Bank A: ";
	cin>>n1;
	outf<<"\nNumber of slabs for Bank A: "<<n1;
	float r1[n1];
	int p1[n1];
	cout<<"Enter period and interest rate for each slab: ";
	outf<<"\nPeriod and interest rate:\n";
	for(int i=0;i<n1;i++)
	{
		cin>>p1[i]>>r1[i];
		outf<<p1[i]<<" "<<r1[i]<<"\n";
	}
	cout<<"Enter number of slabs for Bank B: ";
	cin>>n2;
	outf<<"\nNumber of slabs for Bank B: "<<n2;
	float r2[n2];
	int p2[n2];
	cout<<"Enter period and interest rate for each slab: ";
	outf<<"\nPeriod and interest rate:\n";
	for(int i=0;i<n2;i++)
	{
		cin>>p2[i]>>r2[i];
		outf<<p2[i]<<" "<<r2[i]<<"\n";
	}
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<p1[i];i++)
		{
			emi1+=p*r1[i]/(1-1/pow((1+r1[i]),t*12));
		}
	}
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<p2[i];i++)
		{
			emi2+=p*r2[i]/(1-1/pow((1+r2[i]),t*12));
		}
	}
	if(emi1>emi2)
	{
		cout<<"EMI of BANK A: "<<emi1<<" is greater than "<<"EMI of BANK B: "<<emi2<<" Hence choose Bank B";
		outf<<"EMI of BANK A: "<<emi1<<" is greater than "<<"EMI of BANK B: "<<emi2<<" Hence choose Bank B";
	}
	else if(emi1==emi2)
	{
		cout<<"EMI of BANK A: "<<emi1<<" is same as "<<"EMI of BANK B: "<<emi2<<" Hence choose either banks";
		outf<<"EMI of BANK A: "<<emi1<<" is same as "<<"EMI of BANK B: "<<emi2<<" Hence choose either banks";
	}
	else
	{
		cout<<"EMI of BANK A: "<<emi1<<" is lesser than "<<"EMI of BANK B: "<<emi2<<" Hence choose Bank A";
		outf<<"EMI of BANK A: "<<emi1<<" is lesser than "<<"EMI of BANK B: "<<emi2<<" Hence choose Bank A";
	}
	outf.close();
	return 0;
}
