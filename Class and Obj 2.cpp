
			//	Taking Info from user
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
	
	Book b; 						// Obj created for class Book
	cout<<"Enter Title ";	
	getline(cin ,b.title);			// Taking "title" from user with spaces in between

	cout<<"Enter Author ";
	getline(cin , b.author );		// Taking "Author" from user with spaces in between
	b.getinfo();					// Calling function for obj b
	
	
	return 0;
}


