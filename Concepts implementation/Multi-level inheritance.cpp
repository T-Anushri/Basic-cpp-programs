#include<iostream>
#include<vector>
using namespace std;
class list{
    private:
        int x;
    protected:
        vector<int>v;
    public:
        void create()
        {   
			cout<<"Enter the elements:";
            for(int i=0;i<3;i++)
            {   
				cin>>x;
                v.push_back(x);
            }
        }
        void print()
        {   
			for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
};
class stack:public list{
    private:
        int x;
    public:
        void insert_end()
        {   
			cout<<"Enter the element to be inserted:";
            cin>>x;
            v.push_back(x);
        }
        void delete_end()
        {  
			v.pop_back();
        }
};
class queue:public stack{
    public: 
	    void delete_front()
	    {
	        v.erase(v.begin());
	    }
};
int main()
{
    int choice;
    cout<<"STACK"<<endl;
    stack s;
    s.create();
    cout<<"Enter 1 for insertion, 2 for deletion, 3 for print, 4 for exit:"<<endl;
    do{
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                s.insert_end();
                break;
            case 2:
                s.delete_end();
                break;
            case 3:
                s.print();
                break;
            case 4:
                cout<<"EXIT!"<<endl;
                break;
            default:
                cout<<"Invalid choice";
        }
    }while(choice!=4);
    cout<<"QUEUE"<<endl;
    queue q;
    q.create();
    cout<<"Enter 1 for insertion, 2 for deletion, 3 for print, 4 for exit:"<<endl;
    do{
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                q.insert_end();
                break;
            case 2:
                q.delete_front();
                break;
            case 3:
                q.print();
                break;
            case 4:
                cout<<"EXIT!";
                break;
            default:
                cout<<"Invalid choice";
        }
    }while(choice!=4);
    return 0;
}
