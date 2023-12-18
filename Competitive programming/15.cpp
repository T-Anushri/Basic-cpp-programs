#include<iostream>
#include<stdexcept>
using namespace std;
class Account{
	public:
		string Acct_Name,Acct_acctno,Acct_Address;
		double Acct_Bal;
		Account(string name,string no,string add,double bal)
		{
			Acct_Name=name;
			Acct_acctno=no;
			Acct_Address=add;
			try
			{
				if(bal<0.0)
					throw invalid_argument("Balance must be greater than 0.0");
				else
					Acct_Bal=bal;
			}
			catch(invalid_argument &e)
			{
				cerr<<e.what()<<endl;
			}
		}
		void deposit(double deposit_amt)
		{
			Acct_Bal+=deposit_amt;
		}
		void withdraw(double withdraw_amt)
		{
			try
			{
				if(Acct_Bal<withdraw_amt)
					throw invalid_argument("Insufficient balance");
				else
					Acct_Bal-=withdraw_amt;
				cout<<"After withdrawing 1000: "<<endl;
			}
			catch(invalid_argument &e)
			{
				cerr<<e.what()<<endl;
			}
		}
		void display()
		{
			cout<<"Account name: "<<Acct_Name<<endl;
			cout<<"Account number: "<<Acct_acctno<<endl;
			cout<<"Account address: "<<Acct_Address<<endl;
			cout<<"Account balance: "<<Acct_Bal<<endl;
		}
};
int main()
{
	Account a("Anushri","123","IFC809#",1000);
	a.deposit(500);
	cout<<"500 deposited"<<endl;
	cout<<"Current account balance is "<<a.Acct_Bal<<endl;
	a.withdraw(1000);
	a.display();
	a.withdraw(1000);
	a.display();
	return 0;
}
