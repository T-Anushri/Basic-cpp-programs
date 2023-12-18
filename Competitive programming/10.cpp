#include<iostream>
#include<map>
using namespace std;
void morethanNbyK(int arr[],int n,int k)
{
	map<int,int>m;
	int x=n/k;
	for(int i=0;i<n;i++)
		m[arr[i]]++;
	map<int,int>::iterator i;
	for(i=m.begin();i!=m.end();i++)
	{
		if(i->second>x)
			cout<<i->first<<" ";
	}
}
int main()
{
	int arr[]={3, 1, 2, 2, 1, 2, 3, 3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=4;
	morethanNbyK(arr,n,k);
	return 0;
}
