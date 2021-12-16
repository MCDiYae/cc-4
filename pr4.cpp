#include <iostream> 
#include <list> 
using namespace std;
class Personne    {  // creation de class personne
public :
	string nom;
    int age;
	string pr;
public :
Personne(string nom ,string pr ,int age){
this->nom = nom ; 
this->age = age;
this->pr = pr;
} 
};


int main() 
{
	
list<Personne> maliste;  // remplissage du list 
maliste.push_back(Personne( "elgrande", "toto" , 28 )); 
maliste.push_back(Personne("dizzy","dross" , 33 ));

list<Personne>::iterator it;
for (it = maliste.begin(); it != maliste.end(); ++it){
cout    << "bnjr " << it->nom << " " <<it->pr << " vous avez "<< it->age<<" ans!"<< endl  ; 
}
return 0 ;
}
