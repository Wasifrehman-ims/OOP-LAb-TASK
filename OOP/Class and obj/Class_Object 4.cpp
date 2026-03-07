#include <iostream>
using namespace std;

class Student{
	public:
		string name;
		double id;
		int rollNo;
		
	void display(){
		cout<<"Name : "<<name<<endl;
		cout<<"Id   : "<<id<<endl;
		cout<<"Roll No : "<<rollNo<<endl;
	}
};
int main(){
	Student s;
	cout<<"Enter Student Name : ";
	getline (cin , s.name);
	
	cout<<"Enter Student id : ";
	cin>>s.id;
	
	cout<<"Enter Student Roll Number : ";
	cin>>s.rollNo;
	
	s.display();

	return 0;
}
