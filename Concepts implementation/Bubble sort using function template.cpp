#include<iostream> 
#include<vector> 
using namespace std; 
template<typename T> 
void BubbleSort(T arr[], int n) 
{ 
	for(int i=0;i<n-1;++i)
	{ 
		for(int j=0;j<n-i-1;++j)
		{ 
			if(arr[j]>arr[j+1])
			{ 
				T temp = arr[j+1]; 
				arr[j+1] = arr[j]; 
				arr[j] = temp; 
			} 
		} 
	} 
} 
template<typename T> 
void PrintArray(T arr[], int n) 
{ 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 
	cout <<"\n\n"; 
} 
int main() 
{ 
	int intArr[] = { 1, 10, 90, 100, -1, 11, 9, 14, 3, 2, 20, 19 }; 
	int intArrSize = sizeof(intArr) / sizeof(int); 
	cout << "Integer Array Before Sorting: " << endl; 
	PrintArray(intArr, intArrSize); 
	BubbleSort(intArr, intArrSize);
	cout << "Integer Array After Sorting: " << endl; 
	PrintArray(intArr, intArrSize); 
	char charArr[] = { 'c', 'b', 'a', 'f', 'e', 'd' }; 
	int charArrSize = sizeof(charArr) / sizeof(char); 
	cout << "Char Array Before Sorting: " << endl; 
	PrintArray(charArr, charArrSize); 
	BubbleSort(charArr, charArrSize); 
	cout << "Char Array After Sorting: " << endl; 
	PrintArray(charArr, charArrSize); 
	float floatArr[] = { 1.1f, 0.5f, 2.3f, 0.2f, 1.5f }; 
	int floatArrSize = sizeof(floatArr) / sizeof(float); 
	cout << "Float Array Before Sorting: " << endl; 
	PrintArray(floatArr, floatArrSize); 
	BubbleSort(floatArr, floatArrSize); 
	cout << "Float Array After Sorting: " << endl; 
	PrintArray(floatArr, floatArrSize); 
	return 0; 
}
