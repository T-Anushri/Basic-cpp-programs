#include<iostream>
using namespace std;
class Square{
	private:
		int side;
	public: 
		Square(int s)
		{
			this->side=s;
		}
		int getside()
		{
			return side;
		}
};
class Rectangle{
	private:
		int length,breadth;
	public:
		Rectangle(int length,int breadth)
		{
			this->length=length;
			(*this).breadth=breadth;
		}
		int getlength()
		{
			return length;
		}
		int getbreadth()
		{
			return breadth;
		}
};
void area(int side)
{
	cout<<side*side<<endl;
}
void area(int length,int breadth)
{
	cout<<length*breadth<<endl;
}
int main()
{
	Square s(2);
	int side=s.getside();
	area(side);
	Rectangle r(2,4);
	int l=r.getlength();
	int b=r.getbreadth();
	area(l,b);
	return 0;
}
