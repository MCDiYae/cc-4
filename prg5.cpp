#include <iostream>
#include <set>
#include <iterator>
using namespace std;

 bool myfun(int a , set<int, greater<int > > set2){
	 set<int, greater<int> >::iterator it;
   for(it = set2.begin(); it != set2.end(); ++it){
    if (*it == a) { return true ; }
  
 }
}
int main (){
	int a ,n;	
set<int, greater<int> > myset;	
for (int i=1 ; i<=100 ; ++i)
{      
	myset.insert(i);
}

cout<<endl;

cout<<"Entrez une valeur d'un entier pour la voire s'il existe :\n ";
cin>> a;
if ( myfun(a,myset)== true) cout<<"la valeur existe";
else cout<< "la valeur n'exixte pas";


    return 0;
}


