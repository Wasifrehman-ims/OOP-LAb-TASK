//Create a class Rectangle with length and width. Calculate and display the area.

#include <iostream>
using namespace std;
// The same task implemented using another approach.
class Rectangle{
	private :
		double length ;
		double width;
	public :
	// Setter function to assign values to private data members
	void setvalue(double l , double w){
		length = l ;
		width  = w ;
	}
	double area(){
		return length * width;
	}	
};
int main(){
	Rectangle r;
	r.setvalue(4 , 5);
	cout<<"Area = "<<r.area();
	
	return 0;

}

