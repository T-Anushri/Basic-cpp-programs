#include<iostream>
#include<vector>
using namespace std;
class Matrix{
	public:
		vector< vector<int> >mat;
		Matrix(int r,int c)
		{
			mat.resize(r,vector<int>(c));
		}
		Matrix operator +(Matrix m)
		{
			Matrix res(mat.size(),mat[0].size());
			for(int i=0;i<mat.size();i++)
			{
				for(int j=0;j<mat[i].size();j++)
					res.mat[i][j]=mat[i][j]+m.mat[i][j];
			}
			return res;
		}
};
int main()
{
	int t,r,c;
	cin>>t;
	while(t--)
	{
		cin>>r>>c;
		Matrix m1(r,c);
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cin>>m1.mat[i][j];
		}
		Matrix m2(r,c);
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cin>>m2.mat[i][j];
		}
		Matrix res=m1+m2;
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cout<<res.mat[i][j]<<" ";
			cout<<endl;
		}
	}
}
