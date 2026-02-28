#include <iostream>
using namespace std;

class Book{		// Creating class
	public :
		string title ;
		string author;
		
	void getinfo(){
	cout<<"Title  : "<<title<<endl ;
	cout<<"Author : "<<author;
	}
};

int main(){
	
	Book b; 					// Obj created for class Book
	b.title = "Rich Dad, Poor Dad " ;					
	b.author = "Robert T. Kiyosaki  "; 	
	b.getinfo();				// Calling function for obj b
	
	
	return 0;
}

