#include <iostream>
using namespace std;

class Product{
	private :
		string name;
		int quantity;
		double pricePerUnit;
		
	public: 
		void setName(string n){
			name = n;
		}	
		void setQuantity(int q){
			if ( q >0 ){
			quantity = q ;
			}else {
				cout<<"Invalid Quantity "<<endl;
			quantity = 0;
			}
		}
		void setPrice(double p){
			if (p>0){
			pricePerUnit = p;
			}else {
			cout<<"Invalid price "<<endl;
			pricePerUnit = 0;
			}
		}
		
		string getName(){
			return name;
		}
		int getQuantity(){
			return quantity;
		}
		double getPrice(){
			return pricePerUnit;
		}
	double totalPrice(){
		return quantity * pricePerUnit;
	}	
		
};

int main(){
	Product p;
	string name;
	int quantity;
	double price;
	
	cout<<"Enter Name : ";
	getline(cin , name);
	cout<<"Enter Quantity : ";
	cin>>quantity;
	cout<<"Enter Price : ";
	cin>>price ;
	
	p.setName(name);
	p.setQuantity(quantity);
	p.setPrice(price);
	
	cout<<"---- Product Details ---- "<<endl;
	cout<<"Name : "<<p.getName()<<endl;
	cout<<"Quantity  : "<<p.getQuantity()<<endl;
	cout<<"Price : "<<p.getPrice()<<endl;
	
	cout<<"Total Price : "<<p.totalPrice();
	
	return 0;
	
}