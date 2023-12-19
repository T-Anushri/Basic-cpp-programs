#include<iostream>
using namespace std;
class Person{
	protected:
		string name;
		int age;
		void getdata()
		{
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the age: ";
			cin>>age;
		}
		void putdata()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};
class Professor:public Person{
	protected:
		int profId;
		string publicationDetails;
	public:
		Professor(int i)
		{
			profId=2100+i;
		}
		void getdata()
		{
			Person::getdata();
			cout<<"Enter publication details: ";
			cin>>publicationDetails;
		}
		void putdata()
		{
			Person::putdata();
			cout<<"Publication details: "<<publicationDetails<<endl;
			cout<<"Professor ID: "<<profId<<endl;
		}
};
class Student:public Person{
	protected:
		int studId;
		int marks[6];
	public:
		Student(int i)
		{
			studId=2200+i;
		}
		void getdata()
		{
			Person::getdata();
			cout<<"Enter marks for 6 subjects: ";
			for(int i=0;i<6;i++)
				cin>>marks[i];
		}
		void putdata()
		{
			Person::putdata();
			cout<<"Marks for 6 subjects: "<<endl;
			for(int i=0;i<6;i++)
				cout<<marks[i]<<" ";
			cout<<endl;
			double average=0;
			for(int i=0;i<6;i++)
				average+=marks[i];
			average/=6;
			cout<<"Average: "<<average<<endl;
			cout<<"Student ID: "<<studId<<endl;
		}
};
int main()
{
	for(int i=0;i<3;i++)
	{
		Professor p(i);
		p.getdata();
		p.putdata();
	}
	for(int i=0;i<3;i++)
	{
		Student s(i);
		s.getdata();
		s.putdata();
	}
	return 0;
}
