#include<iostream>
#include<vector>
using namespace std;
class Vector{
	public:
		vector<int> v;
		Vector()
		{
			int x;
			cout<<"Enter 5 vector values:";
			for(int i=0;i<5;i++)
			{
				cin>>x;
				v.push_back(x);
			}
		}
		void operator ++()
		{
			for(int i=0;i<5;i++)
				cout<<v[i]+1<<" ";
			cout<<endl;
		}
		void operator --()
		{
			for(int i=0;i<5;i++)
				cout<<v[i]-1<<" ";
			cout<<endl;
		}
		void operator -(Vector v2)
		{
			for(int i=0;i<5;i++)
				cout<<v[i]-v2.v[i]<<" ";
			cout<<endl;
		}
};
int main()
{
	Vector v1;
	Vector v2;
	++v1;
	--v1;
	v1-v2;
	return 0;
}
