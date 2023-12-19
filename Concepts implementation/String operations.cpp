#include<iostream>
using namespace std;
class city{
	public:
		string arr[100];
		int n;
		city(int len)
		{
			cout<<"Enter city names:";
			for(int i=0;i<len;i++)
			{
				getline(cin,arr[i]);
			}
			(*this).n=len;
		}
		void start_with_s()
		{
			cout<<"City names starting with s:"<<endl;
			for(int i=0;i<n;i++)
			    if(arr[i][0]=='s'||arr[i][0]=='S')
					cout<<arr[i]<<" ";
			cout<<endl;		    
		}
		void length()
		{
			cout<<"City names with length greater than 8:"<<endl;
			for(int i=0;i<n;i++)
				if(arr[i].length()>8)
					cout<<arr[i]<<" ";
			cout<<endl;
		}
		void find()
		{
			cout<<"City names with letter e"<<endl;
			for(int i=0;i<n;i++)
				if(arr[i].find('e')!=-1)
					cout<<arr[i]<<" ";
			cout<<endl;
		}
};
int main()
{
	city c(5);
	c.start_with_s();
	c.length();
	c.find();
	return 0;
}
