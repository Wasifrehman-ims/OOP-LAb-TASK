#include <iostream>
#include <string>

using namespace std;

class Employee{
	private:
		string name ;
		int employeeId;
		double salary;
	public :
		void setter(string n, int id , double sal){
			name = n;
			employeeId =id ;
			salary = sal;
		}
		string getName(){
			return name;
		}
		int getEmployeeId(){
			return employeeId;
		}
		double getSalary(){
			return salary;
		}
};

int main(){
	int n;
	cout<<"Enter Number of Empolyees : ";
	cin>>n;
	
	Employee e[n];
	
	string name;
	int id;
	double salary;
	
	cout<<"------- Enter Employee details ------- "<<endl;
	
	for (int i =0 ; i < n ; i++){
		cin.ignore();
		cout<<"Enter Employee Name "<<i+1<<" : ";
		getline(cin, name);
		
		cout<<"Enter Employee id "<<i+1<<" : ";
		cin>>id;
		
		cout<<"Enter Employee salary "<<i+1<<" : ";
		cin>>salary;

		e[i].setter(name, id, salary);
		cout<<"-------------------------"<<endl;
	}
	char choice;
	cout<<"Enter your choice : ";
	cin>>choice;
	
	if (choice == 'y'  || choice == 'Y' ){
		cout<<"\n---- Employee details ---- "<<endl;
	
	for(int i= 0; i<n ; i++){
		cout<<"Employee "<<i+1<<" Detail "<<endl;
		cout<<"Employee Name "<<i+1 <<" : "<<e[i].getName()<<endl;
		cout<<"Employee id "<<i+1<<" : "<<e[i].getEmployeeId()<<endl;
		cout<<"Employee salary "<<i+1<<" : "<<e[i].getSalary()<<endl;
		cout<<" ________________________ "<<endl;
		cout<<endl;
	}	
}	else {
	cout<<"Details not displayed.\n";
}

	return 0;
}