#include <iostream>
using namespace std;

class Book{
	private :
		string title;
		string author;
		double price ;
	public:
		void setTitle(string t ){
			title = t;
		}
		void setAuthor(string a){
			author = a;
		}
		void setPrice(double p){
			price = p;
		}
		
		string getTitle(){
			return title;
		}		
		string getAuthor(){
			return author;
		}
		double getPrice(){
			return price ;
		}
};

int main(){
	Book b;
	string title;
	string author;
	double price;
	
	cout<<"Enter Title : ";
	getline(cin, title);
	
	cout<<"Enter Author : ";
	getline(cin,author);
	
	cout<<"Enter price : ";
	cin>>price;
	
	b.setTitle(title);
	b.setAuthor(author);
	b.setPrice(price);
	
	cout<<endl;
	cout<<"----- Book Details ------"<<endl;
	cout<<"Title : "<<b.getTitle()<<endl;
	cout<<"Author : "<<b.getAuthor()<<endl;
	cout<<"Price  : "<<b.getPrice();
	
	return 0;
}