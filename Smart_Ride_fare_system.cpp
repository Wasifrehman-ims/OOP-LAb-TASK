#include <iostream>
using namespace std;


class Smart{
	protected:
		string passengername;
		int id;
		double basefare;
	public:	
		void setp(string p){
			passengername= p;
		}
		void setb(double b){
			basefare = b;
		}
		void seti(int i){
			id = i;
		}
	virtual void displayrideDetails(){	//Parent function must be virtual
		cout<<passengername<<endl;			//Function name must be EXACTLY the same
		cout<<id<<endl;					//Parameter list must be identical
		cout<<basefare<<endl;					//Return type must be same (or compatible)
	}									//Access specifier can change
	virtual double calculatefare(){
		return 0;
	}	
};
class Economy: public Smart{
	public :
		double distanceKm;
	Economy(string p ,int i, double b, double d) 
	{
		passengername = p;
		id=i;
		basefare = b;
		distanceKm =d;
	}	
	void displayrideDetails() override
	{
		cout<<"Passenger name : "<<passengername<<endl;
		cout<<"Id : "<<id<<endl;
	}	
	double calculatefare()  override
	{
		double finalfare = basefare + (distanceKm * 8);
		return finalfare;
	}	
};
class Luxrury : public Smart{
	public :	
		double distanceKm;
		double serviceCharge;
	Luxrury(string p ,int i, double b, double d,double s )
	{
		passengername = p;
		id=i;
		basefare = b;
		distanceKm =d;
		serviceCharge=s;
	}
	void displayrideDetails() override	
	{
		cout<<"Passenger name : "<<passengername<<endl;
		cout<<"Id : "<<id<<endl;
	}
	double calculatefare  (){
		double finalfare = basefare + (distanceKm * 15)+ serviceCharge;
		return finalfare;
		}
};

int main(){
//	Smart s;
//	s.setp("sara");
//	s.seti(1);
//	s.setb(12);
//	s.displayrideDetails();
//	cout<<s.calculatefare()<<endl;
	
	cout<<"------- Economy class-------- "<<endl;
	Economy e1("Sara", 201,100, 15);
	e1.displayrideDetails();
	cout<<"Final fare : "<<e1.calculatefare()<<endl;

	cout<<"------- Luxrury class-------- "<<endl;
	
	Luxrury l1("Ahmed", 305 ,120,10,80 );
	l1.displayrideDetails();
	cout<<"Final fare : "<<l1.calculatefare()<<endl;
	return 0;
}