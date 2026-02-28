#include <iostream>
using namespace std;
		//Create a class Rectangle with length and width. Calculate and display the area.

class Rectangle{
	public :
		double length ;			//	for Higher precision we use "double".
		double width;
		
	double area(){
		return length * width;
	}	
};
int main(){
	Rectangle r;
	r.length = 5.5;
	r.width  = 10;
	cout<<"Area = "<<r.area();

	return 0;
}