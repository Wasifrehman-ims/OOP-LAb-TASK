#include <iostream>
using namespace std;

class Hero{
	protected:
		string name;
		int HealthPoints;
		string HeroType;
		double PowerLevel;
		int ExperiencePoints;
		
		
	public:
		Hero(string n , int HP , string ht ,double pl , int exp){
			name = n;
			HealthPoints = HP;
			HeroType = ht;
			PowerLevel = pl;
			ExperiencePoints = exp;
		}
		string getName() {
		    return name;
}

		void common(){
			cout<<"==================Welcome to the Game ===================="<<endl;
			cout<<"-------------------RULES-------------"<<endl;
			cout<<"Higher Attack = More Damage "<<endl;
			cout<<"Higher Defense = Less Damage Taken "<<endl;
			cout<<"======================================"<<endl;
			cout<<endl;
		}	
		
		virtual void showProfile(){
			cout<<"Name 	          : "<<name<<endl;
			cout<<"Health Points 	  : "<<HealthPoints<<endl;
			cout<<"Hero Type         : "<<HeroType <<endl;
			cout<<"Power Level 	  : "<<PowerLevel <<endl;
			cout<<"Experience Points : "<<ExperiencePoints<<endl;
		}
		
		virtual double attack() = 0;
		virtual double defend() = 0;	
};
class Warrior : public Hero{
	private :
	string WeaponName;
	double ArmorStrength;
	int RageLevel;
	
	public :
		Warrior(string n , int HP , string ht ,double pl , int exp ,string w , double a ,int r): Hero(n , HP, ht,pl,exp){
			WeaponName = w;
			ArmorStrength = a;
			RageLevel  = r;
		}
		void showProfile () override {
			Hero::showProfile();
			cout<<"Weapon Name	         : "<<WeaponName<<endl;
			cout<<"Armor Strength	         : "<<ArmorStrength <<endl;
			cout<<"Rage Level	         : " <<RageLevel<<endl;
		}

		double attack()override{
			return 	PowerLevel * 1.5 + RageLevel ;
			
		}	
		double defend()override{
			return ArmorStrength + HealthPoints *0.2;
			
		}
};
class Mage : public Hero{
	private :
	string SpellName;
	double SpellLevel;
	int ManaPoints;
	
	public :
		Mage(string n , int HP , string ht ,double pl , int exp ,string Sname , double Slevel ,int m): Hero(n , HP, ht,pl,exp){
			SpellName = Sname;
			SpellLevel = Slevel;
			ManaPoints  = m;
		}
		void showProfile () override{
			Hero::showProfile();
			cout<<"Spell Name	         : "<<SpellName<<endl;
			cout<<"Spell Level	         : "<<SpellLevel <<endl;
			cout<<"Mana Points	         : " <<ManaPoints<<endl;
		}

		double attack()override{
			return 	PowerLevel *1.2 + ManaPoints *0.5;
			
		}	
		double defend()override{
			return ManaPoints *0.7 + HealthPoints * 0.3;
			
		}
};
class Archer : public Hero{
	private :
	string BowType;
	int NumArrows;
	double AccuracyRate; 
	
	public :
		Archer(string n , int HP , string ht ,double pl , int exp ,string Bow , int Number ,double Accuracy): Hero(n , HP, ht,pl,exp){
			BowType = Bow;
			NumArrows = Number;
			AccuracyRate  = Accuracy;
		}
		void showProfile ()override {
			Hero::showProfile();
			cout<<"Weapon Name	         : "<<BowType<<endl;
			cout<<"Number of Arrows	 : "<<NumArrows <<endl;
			cout<<"Accuracy Rate	         : " <<AccuracyRate<<endl;
		}

		double attack() override {
			return 	PowerLevel * AccuracyRate *3 ;
			
		}	
		double defend() override {
			return AccuracyRate *45 + HealthPoints *0.4 ;
			
		}
};
int main (){
	
	Warrior w1 ("Ragnar", 200 , "Warrior", 50 , 400 , "Shadow Blade" , 100 , 7);
	w1.common();
	
	cout<<"============Warrior Profile============="<<endl;
	w1.showProfile();
	cout<<"Warrior Damage 	   	 : "<<w1.attack()<<endl;
	cout<<"Warrior Defense 	: "<<w1.defend()<<endl;
	cout<<"-----------------------------------"<<endl;
	
	cout<<"\n============Mage Profile============= "<<endl;
	Mage m1("Zalthar", 150 , "Mage",40 , 350 ,"Voidstrom", 5 , 200);
	m1.showProfile();
	cout<<"Mage Damage 	   	 : "<<m1.attack()<<endl;
	cout<<"Mage Defense		 : "<<m1.defend()<<endl;
	cout<<"-----------------------------------"<<endl;
	
	cout<<"\n============Archer Profile============="<<endl;
	Archer a1("Sylara",100 , "Archer", 30 , 300 , "Shadow Bow",30 , 0.5);
	a1.showProfile();
	cout<<"Archer Damage 	   	 : "<<a1.attack()<<endl;
	cout<<"Archer Defense		 : "<<a1.defend()<<endl;
	cout<<"-----------------------------------"<<endl;
	// Storeing attack values
	double Wattack = w1.attack();
	double Mattack = m1.attack();
	double Aattack = a1.attack();
	
	cout << "\n===== BATTLE SUMMARY =====\n";
	double MaxAttack = Wattack;
		string bestHero = w1.getName();

	if (Mattack > MaxAttack) {
    	MaxAttack = Mattack;
    	bestHero = m1.getName();
}

	if (Aattack > MaxAttack) {
    	MaxAttack = Aattack;
    	bestHero = a1.getName();
}

	cout << "Highest Attack Hero  : " << bestHero << endl;
	cout << "Attack Value  	     : " << MaxAttack << endl;

	return 0;
}