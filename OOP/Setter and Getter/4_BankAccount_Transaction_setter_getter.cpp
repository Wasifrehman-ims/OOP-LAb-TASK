#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	private:
		string accountholder;
		double balance;	
	public:
		void setaccountholder(string a){
			accountholder = a;
		}
		void setbalance(double bal){
			balance = bal;
		}
		void setdeposit(double deposit ){
			balance += deposit;
		}
		void setwithdraw(double withdraw){
			if(withdraw > balance ){
				cout<<"Insufficent Balance"<<endl;	
			}else
			balance -= withdraw;
		}
		
		string getaccountholder(){
			return accountholder;
		}
		double getbalance(){
			return balance;
		}
};

int main(){
	BankAccount b;
	string holder;
	double bal;
	double dep;
	double with;
	
	cout<<"Enter Account Holder Name : ";
	getline(cin,holder);
	
	cout<<"Enter balance : ";
	cin>>bal;
	
	cout<<"Enter deposit : ";
	cin>>dep;
	
	cout<<"Enter withdraw : ";
	cin>>with;
	
	b.setaccountholder(holder);
	b.setbalance(bal);
	b.setdeposit(dep);
	b.setwithdraw(with);
	
	cout<<"Account Holder : " << b.getaccountholder()<<endl;
	cout<<"Balance : " << b.getbalance()<<endl;
	
	return 0;
}
