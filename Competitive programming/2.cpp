#include<iostream>
using namespace std;
int checkpw(char str[],int n)
{
	if(n<6)
		return 0;
	int a=0,cap=0,low=0,num=0;
	while(a<n)
	{
		if(str[a]==' '||str[a]=='/')
			return 0;
		if(str[a]>=65&&str[a]<=90)
			cap++;
		if(str[a]>=97&&str[a]<=122)
			low++;
		if(str[a]>=48&&str[a]<=57)
			num++;
		a++;
	}
	return cap>0 && low>0 && num>0;
}
int main()
{
	string pw;
	cout<<"Enter the password:";
	cin>>pw;
	if(checkpw(&pw[0],pw.length()))
		cout<<"Password valid";
	else
		cout<<"Invalid password, try again";
	return 0;
}

