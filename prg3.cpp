#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{	int a ,nbr;  // creation d'un instance de classe List:
list <int> mylist;
cout<<"combien de nombre des entiers ?  " ;
cin>>nbr;
cout << endl;
for (int i = 0; i < nbr; ++i)
{
cout<<"donnez l'entier "<<i+1<<" : " ;
	 cin>>a;


	 mylist.push_back(a);
}
cout<<endl;
//triage de la liste
mylist.sort();
cout<<"la liste triee est :  ";
list <int> :: iterator it;
for(it = mylist.begin(); it != mylist.end(); ++it)
cout << '\t' << *it;
return 0;


}



