#include<iostream> 
#include<vector> 
using namespace std; 
template <class T> 
class Sort 
{ 
	public: 
	void InsertionSort(T arr[], int n) 
	{ 
		int i, j; 
	 	T temp; 
		for (i = 1; i < n; i++) 
		{ 
			temp = arr[i]; 
			for(j = i - 1; j >= 0; j--) 
			{ 
				if(arr[j] > temp) 
			arr[j + 1] = arr[j]; 
			else 
			break; 
			} 
			arr[j + 1] = temp; 
		} 
	} 
	void PrintArray(T arr[], int n) 
	{
		for (int i = 0; i < n; ++i) 
			cout << arr[i] << ' '; 
		cout << endl; 
	} 
}; 
int main() 
{ 
	Sort<int>i; 
	int intArray[] = { 6,3,2,1,4,7,8,9 }; 
	int n = sizeof(intArray) / sizeof(int); 
	cout << "Integer Array Before Sort: "; 
	i.PrintArray(intArray, n); 
	i.InsertionSort(intArray, n); 
	cout << "Integer Array After Sort: "; 
	i.PrintArray(intArray, n); 
	cout << "\n"; 
	Sort<float>f; 
	float floatArray[] = { 4.5,6.8,9.0,1.2,0.1,8.7 }; 
	n = sizeof(floatArray) / sizeof(float); 
	cout << "Float Array Before Sort: "; 
	f.PrintArray(floatArray, n); 
	f.InsertionSort(floatArray, n); 
	cout << "Float Array After Sort: "; 
	f.PrintArray(floatArray, n); 
	cout << "\n";
	Sort<char>c; 
	char charArray[] = { 'Z','R','A','K','T','Y' }; 
	n = sizeof(charArray) / sizeof(char); 
	cout << "Char Array Before Sort: "; 
	c.PrintArray(charArray, n); 
	c.InsertionSort(charArray, n); 
	cout << "Char Array After Sort: "; 
	c.PrintArray(charArray, n); 
}
