#include <iostream>
#include <iterator>
#include <map>
using namespace std;
int main()
{
	map<int, int> first;
	first.insert(pair<int, int>(1, 40));
	first.insert(pair<int, int>(2, 30));
	first.insert(pair<int, int>(3, 60));
	first.insert(pair<int, int>(4, 20));
	first[5] = 50;
	map<int, int>::iterator itr;
	cout<<"The map first is : "<<endl;
	cout<<"\tKEY\tELEMENT"<<endl;
	for (itr=first.begin();itr!=first.end();itr++) 
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
	map<int, int> second(first.begin(),first.end());
	cout<<"\nThe map second after "<<"assign from first is : "<<endl;
	cout<<"\tKEY\tELEMENT"<<endl;
	for (itr=second.begin();itr!=second.end();++itr) 
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
	cout<<"\nfirst after removal of elements less than key=3 : "<<endl;
	cout<<"\tKEY\tELEMENT"<<endl;
	first.erase(first.begin(),first.find(3));
	for (itr=first.begin();itr!=first.end();++itr)
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
	cout<<"\nsecond.erase(4) : "<<endl;
	second.erase(4);
	cout<<"\tKEY\tELEMENT"<<endl;
	for (itr=second.begin();itr!=second.end();++itr)
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
	return 0;
}
