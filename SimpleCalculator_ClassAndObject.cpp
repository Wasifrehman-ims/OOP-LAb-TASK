#include <iostream>
using namespace std;

class Calculator{
	public:
		double num1;
		double num2;
	
	double add(){
		return num1 + num2;
	}
	double subtract(){
		return num1 - num2;
	}
	double multiply(){
		return num1 * num2;
	}
	double divide(){
		if (num2 == 0){
			cout<<"cannot divide by zero ";
			return 0;
		}else{ 	// Will work without this "else"
		return num1 / num2;
		}
	}
};

int main(){
	Calculator c1;
	Calculator c2;
	
	c1.num1  = 10;
	c1.num2  = 5 ;
	
	cout<<"Addition : "<<c1.num1<<" + "<<c1.num2<<" = "<<c1.add() <<endl;
	cout<<"subtraction : "<<c1.num1<<" - "<<c1.num2<<" = "<<c1.subtract() <<endl;
	cout<<"multiplication : "<<c1.num1<<" * "<<c1.num2<<" = "<<c1.multiply() <<endl;
	cout<<"division : "<<c1.num1<<" / "<<c1.num2<<" = "<<c1.divide() <<endl;
	
	c2.num1 = 20;
	c2.num2 = 0;
	
	cout<<"\nAddition : "<<c2.num1<<" + "<<c2.num2<<" = "<< c2.add() <<endl;
	cout<<"subtraction : "<<c2.num1<<" - "<<c2.num2<<" = "<< c2.subtract() <<endl;
	cout<<"multiplication : "<<c2.num1<<" * "<<c2.num2<<" = "<< c2.multiply() <<endl;
	cout<<"division : "<<c2.num1<<" / "<<c2.num2<<" = "<< c2.divide() <<endl;
	
	return 0;
}