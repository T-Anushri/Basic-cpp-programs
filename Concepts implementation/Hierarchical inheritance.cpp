#include<iostream>
using namespace std;
class Student{
	public:
		int roll_no;
		char name[20];
		Student()
		{
			cout<<"Enter roll_no:";
			cin>>roll_no;
			cout<<"Enter name:";
			cin>>name;
		}
};
class Science:public Student{
	public:
		float phy,che,mat;
		Science()
		{
			cout<<"Enter marks:";
			cin>>phy>>che>>mat;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<roll_no<<endl;
			cout<<"Physics mark: "<<phy<<endl;
			cout<<"Chemistry mark: "<<che<<endl;
			cout<<"Maths mark: "<<mat<<endl;
		}
};
class Arts:public Student{
	public:
		float eng,his,eco;
		Arts()
		{
			cout<<"Enter marks:";
			cin>>eng>>his>>eco;
		}
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll no: "<<roll_no<<endl;
			cout<<"English mark: "<<eng<<endl;
			cout<<"History mark: "<<his<<endl;
			cout<<"Economics mark: "<<eco<<endl;
		}
};
int main()
{
	for(int i=0;i<3;i++)
	{
		Science s;
		s.display();
	}
	for(int i=0;i<2;i++)
	{
		Arts a;
		a.display();
	}
}
