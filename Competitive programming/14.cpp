#include<iostream>
using namespace std;
void printpattern(string str, int len)
{
	int i,j,k;
	for(i=0;i<len;i++)
	{
		j=len-i-1;
		for(k=0;k<len;k++)
		{
			if(k==i||k==j)
				cout<<str[k];
			else
				cout<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	string s;
	cout<<"Enter a string: ";
	cin>>s;
	printpattern(s,s.length());
	return 0;
}
