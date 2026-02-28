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
	s.name = " Ali ";
	s.id   = 567129;
	s.rollNo = 32;
	
	s.display();

}