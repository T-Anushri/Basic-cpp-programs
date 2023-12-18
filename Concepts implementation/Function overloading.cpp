#include<iostream>
#include<cstring>
using namespace std;
void copy(char s1[],char s2[])
{
	strcpy(s1,s2);
	cout<<"String 1: "<<s1<<" String 2: "<<s2<<endl;
}
void copy(char s1[],char s2[],int n)
{
	strncpy(s1,s2,n);
	cout<<"String 3: "<<s1<<" String 4: "<<s2<<endl;
}
void concatenate(char s1[],char s2[])
{
	strcat(s1,s2);
	cout<<"String 1: "<<s1<<" String 2: "<<s2<<endl;
}
void concatenate(char s1[],char s2[],int n)
{
	strncat(s1,s2,n);
	cout<<"String 3: "<<s1<<" String 4: "<<s2<<endl;
}
int main()
{
	char s1[100],s2[100],s3[100],s4[100];
	int n1,n2;
	cout<<"String copy:"<<endl;
	cout<<"Enter string1 and string2: ";
	cin>>s1>>s2;
	copy(s1,s2);
	cout<<"Enter string3 and string4: ";
	cin>>s3>>s4;
	cout<<"Enter no. of integers to be copied:";
	cin>>n1;
	copy(s3,s4,n1);
	cout<<"String concatenation:"<<endl;
	cout<<"Enter string1 and string2: ";
	cin>>s1>>s2;
	concatenate(s1,s2);
	cout<<"Enter string3 and string4: ";
	cin>>s3>>s4;
	cout<<"Enter no. of integers to be concatenated: ";
	cin>>n2;
	concatenate(s3,s4,n2);
	return 0;
}
