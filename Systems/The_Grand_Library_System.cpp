#include <iostream>
using namespace std;

class Library{
	private:
		string title;
		string author;
		int id;
	public:
		Library(string t, string a, int i){
			title = t;
			author = a;
			id = i;
		}	
	virtual void display(){
		cout<<"Title : "<<title <<endl;
		cout<<"Author : "<<author <<endl;
		cout<<"Id : "<<id<<endl;
	}	
};
class Book : public Library{
	private:
		int pagescount;
		string genre;
	public:
		Book(string t, string a, int i , int p , string g):Library(t,a,i){
			pagescount = p;
			genre = g;
		}	
	void display() override{
		Library :: display();
		cout<<"Number of Pages :"<<pagescount<<endl;
		cout<<"Genre : "<<genre <<endl; 
	}	
};
class Magazine:public Library{
	private:
		int issueNumber;
		string month;
	public:
	Magazine(string t , string a , int i, int iss, string m):Library(t,a,i){
		issueNumber = iss;
		month = m;
	} 	
	void display() override{
		Library :: display();
		cout<<"Issue Number : "<<issueNumber<<endl;
		cout<<"Month of Publication  : "<<month<<endl;
	}
};
class AudioBook:public Library{
	private:
		int duration ;
		string narrator;
	public:
	AudioBook(string t, string a, int i, int d , string n):Library(t,a,i){
		duration = d;
		narrator = n;
	}	
	void display() override {
		Library :: display();
		cout<<"Duration : "<<duration <<" minutes"<<endl;
		cout<<"Name of Narrator : "<<narrator<<endl;
	}
};

int main(){
	cout<<"----------Book info----------- "<<endl;
	Book b1("Rich Dad Poor Dad ", " Robert Kiyosaki ", 101 , 200 , "Mindset");
	b1.display();
	cout<<endl ;
	
	cout<<"----------Magazine info----------- "<<endl;	
	Magazine m1("abc ", "xyz", 202 , 5 , "April");
	m1.display();
	cout<<endl;
	
	cout<<"----------Audiobook info----------- "<<endl;
	AudioBook a1("def ", "ghi ",302 , 72, "Narrator" );
	a1.display();
	
	
	return 0;
}