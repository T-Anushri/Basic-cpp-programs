#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	vector<string>v;
	string s,t;
	getline(cin,s);
	stringstream x(s);
	while(getline(x,t,' '))
	{
		if(find(v.begin(),v.end(),t)==v.end())
			v.push_back(t);
	    else
	    	v.push_back("oops");
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}
