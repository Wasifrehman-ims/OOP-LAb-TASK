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
		}else{ 	// Will work without this "else".
		return num1 / num2;
		}
	}
};

int main(){
	Calculator c1;
	
	cout<<"Enter num1 : ";
	cin>>c1.num1;
	cout<<"Enter num2 : ";
	cin>>c1.num2; 
	
	cout<<"Addition : "<<c1.num1<<" + "<<c1.num2<<" = "<<c1.add() <<endl;
	cout<<"subtraction : "<<c1.num1<<" - "<<c1.num2<<" = "<<c1.subtract() <<endl;
	cout<<"multiplication : "<<c1.num1<<" * "<<c1.num2<<" = "<<c1.multiply() <<endl;
	cout<<"division : "<<c1.num1<<" / "<<c1.num2<<" = "<<c1.divide() <<endl;
	
	
	return 0;
}
