#include<iostream> 
using namespace std; 
int main() 
{ 
	try 
	{ 
		throw 0; 
	} 
	catch(int a) 
	{ 
		cout<<"Integer\n"; 
	} 
	try 
	{ 
		throw 'g'; 
	} 
	catch(char ch) 
	{ 
		cout<<"Character\n"; 
	} 
	try 
	{ 
		throw 1.0; 
	} 
	catch(...) 
	{ 
		cout<<"Float"; 
	} 
	return 0; 
}
