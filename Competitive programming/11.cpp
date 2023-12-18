#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;
template <typename T>
class Stack{
private:
    vector<T> stack;
public:
    void push(T item) 
	{
        stack.push_back(item);
    }
    T pop()
	{
        if (stack.empty()) 
            throw out_of_range("Stack is empty. Cannot pop.");
        T poppedItem = stack.back();
        stack.pop_back();
        return poppedItem;
    }
    void display()
    {
    	for(int i=0;i<stack.size();i++)
    		cout<<stack[i]<<" ";
    	cout<<endl;
	}
};
int main() {
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    cout << "Popped from intStack: " << intStack.pop() << endl;
    cout << "Popped from intStack: " << intStack.pop() << endl;
    intStack.display();
    Stack<float> floatStack;
    floatStack.push(1.5f);
    floatStack.push(2.5f);
    floatStack.push(3.5f);
    cout << "Popped from floatStack: " << floatStack.pop() << endl;
    cout << "Popped from floatStack: " << floatStack.pop() << endl;
    floatStack.display();
    Stack<char> charStack;
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');
    cout << "Popped from charStack: " << charStack.pop() << endl;
    cout << "Popped from charStack: " << charStack.pop() << endl;
    charStack.display();
	return 0;
}

