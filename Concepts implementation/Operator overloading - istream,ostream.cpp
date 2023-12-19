#include<iostream>
using namespace std;
class time{
	public:
		int hr,min,sec;
		friend istream& operator>>(istream& in,time& tm)
		{
			cout<<"Enter the hours,minutes,seconds: ";
			in>>tm.hr>>tm.min>>tm.sec;
		}
		friend ostream& operator<<(ostream& out,time tm)
		{
			out<<"Time is "<<tm.hr<<" hours "<<tm.min<<" minutes "<<tm.sec<<" seconds.";
		}
};
int main()
{
	time t;
	cin>>t;
	cout<<t;
	return 0;
}
