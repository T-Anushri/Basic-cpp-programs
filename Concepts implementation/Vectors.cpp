#include<iostream>
#include<vector>
using namespace std;
class V{
	vector<int>v;
	int size;
	public:
		V()
		{
			size = 0;
		}
		V(int size)
		{
			(*this).size = size;
			v.resize(size);
		}
		V(int size,int value)
		{
			(*this).size = size;
			v.resize(size,value);
		}
		V(vector<int>v1)
		{
			v = v1;
			size = v1.size();
		}
		V(const V &vobj)
		{
			v = vobj.v;
			size = vobj.v.size();
		}
		~V()
		{
			v.clear();
		}
		void print()
		{
			for(int i=0;i<size;i++)
				cout<<v[i]<<" ";
			cout<<endl;
		}
};
int main()
{
	cout<<"Empty vector: ";
	V v1;
	v1.print();
	cout<<"Null vector: ";
	V v2(5);
	v2.print();
	cout<<"Size and value as parameters: ";
	V v3(5,6);
	v3.print();
	cout<<"Vector as a parameter: ";
	V v4(vector<int>(4,2));
	v4.print();
	cout<<"Copy constructor: ";
	V v5(v4);
	v5.print();
	return 0;
}
