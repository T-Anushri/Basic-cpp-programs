#include<iostream>
#include<algorithm>
using namespace std;
template<typename T>
void sort(T arr[],int n)
{
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	char carr[]={'t','u','d','o','c'};
	int n=sizeof(carr)/sizeof(carr[0]);
	sort(carr,n);
	int iarr[]={87, 45, 67, 23, 12};
	n=sizeof(iarr)/sizeof(iarr[0]);
	sort(iarr,n);
    float farr[]={10.3, 4.5, 7.2, 18.9, 2.1};
    n=sizeof(farr)/sizeof(farr[0]);
    sort(farr,n);
    string sarr[]={"Welcome", "To", "Learn", "Object", "Oriented", "Programming"};
    n=sizeof(sarr)/sizeof(sarr[0]);
    sort(sarr,n);
    return 0;
}
