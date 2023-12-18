#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> UnionArray(int arr1[],int arr2[],int n,int m)
{
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		if(find(v.begin(), v.end(), arr1[i]) == v.end())
			v.push_back(arr1[i]);
	}
	for(int i=0;i<m;i++)
	{
		if(find(v.begin(), v.end(), arr2[i]) == v.end())
			v.push_back(arr2[i]);
	}
	return v;
}
vector<int> IntersectionArray(int arr1[],int arr2[],int n,int m)
{
	vector<int>v;
	vector<int>res;
	for(int i=0;i<n;i++)
	{
		if(find(v.begin(), v.end(), arr1[i]) == v.end())
			v.push_back(arr1[i]);
	}
	for(int i=0;i<m;i++)
	{
		if(find(v.begin(), v.end(), arr2[i]) != v.end())
			res.push_back(arr2[i]);
	}
	return res;
}
vector<int> ExceptArray(int arr1[],int arr2[],int n,int m)
{
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		if(find(v.begin(), v.end(), arr1[i]) == v.end() && arr1[i]%2!=0)
			v.push_back(arr1[i]);
	}
	for(int i=0;i<m;i++)
	{
		if(find(v.begin(), v.end(), arr2[i]) == v.end() &&arr2[i]%2==0)
			v.push_back(arr2[i]);
	}
	return v;
}
int main()
{
	int arr1[]={1,3,4,5,6,8,9};
	int arr2[]={1,5,8,9,2};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	vector<int>v1 = UnionArray(arr1,arr2,n,m);
	cout<<"Union: ";
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	vector<int>v2 = IntersectionArray(arr1,arr2,n,m);
	cout<<"\nIntersection: ";
	for(int i=0;i<v2.size();i++)
		cout<<v2[i]<<" ";
	vector<int>v3 = ExceptArray(arr1,arr2,n,m);
	cout<<"\nExcept: ";
	for(int i=0;i<v3.size();i++)
		cout<<v3[i]<<" ";
}
