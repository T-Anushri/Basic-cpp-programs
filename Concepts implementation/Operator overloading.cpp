#include<iostream>
using namespace std;
class overload{
    int a;
    public:
	    overload(int a)
	    {
	        (*this).a=a;
	    }
	    void operator <(overload temp)
	    {
	        if(temp.a<a)
	            cout<<temp.a<<" is lesser than "<<a<<endl;
	        else
	            cout<<a<<" is lesser than "<<temp.a<<endl;
	    }
	    friend void operator >(overload x,overload y)
	    {
	        if(x.a<y.a)
	            cout<<y.a<<" is greater than "<<x.a<<endl;
	        else
	            cout<<x.a<<" is greater than "<<y.a<<endl;
	    }
	    void operator <=(overload temp)
	    {
	        if(temp.a<a)
	            cout<<temp.a<<" is lesser than "<<a<<endl;
	        else if(temp.a==a)
	            cout<<temp.a<<" is equal to "<<a<<endl;
	        else
	            cout<<a<<" is lesser than "<<temp.a<<endl;
	    }
	    friend void operator >=(overload x,overload y)
	    {
	        if(x.a<y.a)
	            cout<<y.a<<" is greater than "<<x.a<<endl;
	        else if(x.a==y.a)
	            cout<<x.a<<" is equal to "<<y.a<<endl;
	        else
	            cout<<x.a<<" is greater than "<<y.a<<endl;
	    }
	    void operator ++()
	    {
	        cout<<"++"<<a<<" = "<<++a<<endl;
	    }
	    friend void operator --(overload temp)
	    {
	        cout<<"--"<<temp.a<<" = "<<--temp.a<<endl;
	    }
	    void operator ==(overload temp)
	    {
	        if(temp.a==a)
	            cout<<temp.a<<" is equal to "<<a<<endl;
	        else
	            cout<<temp.a<<" is not equal to "<<a<<endl;
	    }
	    friend void operator +(overload x,overload y)
	    {
	        cout<<x.a<<" + "<<y.a<<" = "<<x.a+y.a<<endl;
	    }
};
int main()
{
    overload o1(3);
    overload o2(4);
    overload o3(3);
    overload o4(5);
    cout<<"< : ";
    o1<o2;
    cout<<"> : ";
    o3>o2;
    cout<<"<= : ";
    o1<=o4;
    cout<<">= : ";
    o1>=o3;
    cout<<"++ : ";
    ++o4;
    cout<<"-- : ";
    --o3;
    cout<<"== : ";
    o2==o3;
    cout<<"+ : ";
    o1+o2;
    return 0;
}
