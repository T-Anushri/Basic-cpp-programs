#include<iostream>
#include<vector>
using namespace std;
class matrix{
	int row,col,mat[100][100];
	public:
	    matrix()
	    {
	        cout<<"Default constructor\n";
	        row=2;
	        col=2;
	    }
	    matrix(int r1,int c1)
	    {
	        cout<<"Parametric constructor\n";
	        row=r1;
	        col=c1;
	        cout<<"Enter matrix elements:";
	        for(int i=0;i<row;i++)
	            for(int j=0;j<col;j++)
	                cin>>mat[i][j];
	    }
	    matrix(matrix &m)
	    {
	        cout<<"Copy constructor\n";
	        row=m.row;
	        col=m.col;
	        for(int i=0;i<row;i++)
	        {
	            for(int j=0;j<col;j++)
	                mat[i][j]=m.mat[i][j];
	        }
	    }
	    ~matrix()
	    {
	        cout<<"Deleted"<<endl;
	    }
	    void print()
	    {
	        for(int i=0;i<row;i++)
	        {
	            for(int j=0;j<col;j++)
	                cout<<mat[i][j]<<" ";
	            cout<<endl;
	        }
	    }
};
int main()
{
    matrix m1;
    m1.print();
    int r,c;
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    matrix m2(r,c);
    m2.print();
    matrix m3(m2);
    m3.print();
    return 0;
}
