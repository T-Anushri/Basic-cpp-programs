#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[] = {6,1,3,3,4,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int c=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==arr[i+1])
		{
			c++;
		}
	}
	cout<<c;
	return 0;
}
