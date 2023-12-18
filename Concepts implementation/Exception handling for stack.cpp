#include<iostream> 
using namespace std; 
int top=-1; 
void push(int a,int st[],int n) 
{ 
	try 
	{ 
		if(top==n-1) 
			throw top; 
		else 
			st[++top]=a; 
	} 
	catch(...) 
	{ 
		cout<<"\nStack overflow\n"; 
	} 
} 
void pop(int st[]) 
{ 
	try 
	{ 
		if(top==-1) 
			throw top; 
		else 
			cout<<"Popped element is: "<<st[top--]<<endl; 
	} 
	catch(...) 
	{ 
		cout<<"\nStack underflow\n"; 
	} 
} 
int main() 
{ 
	int n; 
	cout<<"Enter the size of the stack:"; 
	cin>>n; 
	int st[n],choice,ele; 
	do 
	{ 
		cout<<"\nEnter 1-push, 2-pop, 3-exit:"; 
		cin>>choice; 
		switch(choice) 
		{ 
			case 1:  
				cout<<"Enter element to be pushed:"; 
				cin>>ele; 
				push(ele,st,n); 
				break; 
			case 2: 
				pop(st); 
				break; 
			case 3: 
				cout<<"Exit!"; 
				break; 
			default: 
				cout<<"Invalid choice"; 
		} 
	}while(choice!=3); 
	return 0; 
}
