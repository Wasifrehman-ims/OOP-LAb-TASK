#include <iostream>
using namespace std;
class Smart{
	protected:
		string passengername;
		int id;
		double basefare;
	public:	
	Smart(string p, int i, double b){
		passengername= p;
		id = i;
		basefare = b;
	}
	virtual void displayrideDetails(){							//Parent function must be virtual
		cout<<"Passenger name : "<<passengername<<endl;			//Function name must be EXACTLY the same
		cout<<"Id : "<<id<<endl;								//Parameter list must be identical
		cout<<"Base fare : "<<basefare<<endl;					//Return type must be same (or compatible)
	}															//Access specifier can change
	virtual double calculatefare(){
		return 0;
	}	
};
class Economy: public Smart{
	private :
		double distanceKm;
	public:
		Economy(string p ,int i, double b, double d) :Smart(p,i,b)
	{
		distanceKm =d;
	}	
	void displayrideDetails() override
	{
		Smart::displayrideDetails();
	cout<<"Distance in Km : "<<distanceKm<<endl;
	}	
	double calculatefare()  override
	{
		double finalfare = basefare + (distanceKm * 8);
		return finalfare;
	}	
};
class Luxury : public Smart{
	private :	
		double distanceKm;
		double serviceCharge;
	public:
	Luxury(string p ,int i, double b, double d,double s ):Smart (p,i,b)
	{
		distanceKm =d;
		serviceCharge=s;
	}
	void displayrideDetails() override	
	{
		Smart::displayrideDetails(); // ::(scope resolution operator)it calls the displayrideDetails() Function of the Class Smart 
		cout<<"Distance in Km : "<<distanceKm<<endl;
		cout<<"Service Charges : "<<serviceCharge<<endl;
	}
	double calculatefare  ()override
	{
		double finalfare = basefare + (distanceKm * 15)+ serviceCharge;
		return finalfare;
	}
};

int main(){

	cout<<"------- Economy class-------- "<<endl;
	Economy e1("Sara", 201,100, 15);
	e1.displayrideDetails(); 
	cout<<"Final fare : "<<e1.calculatefare()<<endl;

	cout<<"------- Luxury class-------- "<<endl;
	
	Luxury l1("Ahmed", 305 ,120,10,80 );
	l1.displayrideDetails();
	cout<<"Final fare : "<<l1.calculatefare()<<endl;
	return 0;
}