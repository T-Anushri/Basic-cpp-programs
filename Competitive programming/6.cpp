#include<iostream>
using namespace std;
class Solution{
	public:
		class Inner{
			public:
				class Private{
					public:
						static void powerof2(int num){
							if((num & (num-1)) == 0)
								cout<<num<<" is a power of 2";
							else
								cout<<num<<" is not a power of 2";
						}
				};
		};
};
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	Solution::Inner::Private::powerof2(num);
	return 0;
}
