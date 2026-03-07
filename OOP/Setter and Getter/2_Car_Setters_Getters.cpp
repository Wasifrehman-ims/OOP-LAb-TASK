#include <iostream>
using namespace std;

class Car{
		string brand ; // Privatized by Default 
		int modelYear;
		double price ;
	
	public:
		void setbrand(string b){
			brand = b;
		}
		void setmodelyear(int m){
			modelYear = m;
		}
		void setprice(double p){
			price = p;
		}
		string getbrand(){
			return brand;
		}
		int getmodelyear(){
			return modelYear;
		}
		double getprice(){
			return price;
		}
};

int main(){
	Car c;
	c.setbrand("BMW");
	c.setmodelyear(2014);
	c.setprice(140000);
	
	cout<<"Brand : "<<c.getbrand()<<endl;
	cout<<"Model Year : "<<c.getmodelyear()<<endl;
	cout<<"Price : $"<<c.getprice()<<endl;
	
	return 0;
}