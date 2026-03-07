#include <iostream>
using namespace std;

class Student{
	private:
		string name;
		int rollNo;
		double cgpa;
	public:
		//Setter functions to assign values to private data members
		void setname(string n){
			name = n;
		}
		void setrollno(int r){
			rollNo = r;
		}
		void setgpa(double c){
				cgpa = c;
		}	
	
	void display(){
		cout<<"Name : "<<name<<endl;
		cout<<"Roll NO : "<<rollNo<<endl;
		cout<<"Cgpa : "<<cgpa<<endl;	
	}
};
int main(){
	Student s1;

	s1.setname("Ali") ;
	s1.setrollno(7);
	s1.setgpa(2.2);
	s1.display();
	
	return 0;
}