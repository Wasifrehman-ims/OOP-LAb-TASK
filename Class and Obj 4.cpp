#include <iostream>
using namespace std;
//Take car brand and speed from the user and display them.

class Car {
	private :
		string brand;
		double speed;
	public :
	void setdata(string b , double s){
		brand = b;
		speed = s;
	}	
	void display(){
		cout<<"Car Brand : "<<brand <<endl;
		cout<<"Speed : "<< speed <<endl;	
	}
};

int main(){
	Car c;
	string brand;
	double speed;
	
	cout<<"Enter Car Brand : ";
	getline(cin , brand);
	cout<<"Enter Speed : ";
	cin>>speed;
	
	c.setdata(brand , speed );
	c.display();
	
	return 0;
}