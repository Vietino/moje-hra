#include <iostream>
using namespace std;
void statyassasina () {
cout << " Class: Assasin" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 3/3" << endl ;
cout << "Utok: 5" << endl ;
cout << "Energie: 4/4" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Rychly utok - 5 dmg " << endl ;
cout << "2. Utok ze zadu - 10 dmg ( 2 energie )"<< endl ;
}

void statylukostrelce ()  {
cout << " Class: Lukostrelec" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 4/4" << endl ;
cout << "Utok: 4" << endl ;
cout << "Energie: 6/6" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Strela - 4 dmg " << endl ;
cout << "2. trojita strela - 3 dmg vsem ( 2 energie )" << endl ;
cout << "3. Vzdalena strela - 7 dmg ( 4 energie )" << endl ;
}

void statyrytire (){
cout << " Class: Rytir" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 7/7" << endl ;
cout << "Utok: 3" << endl ;
cout << "Energie: 4/4" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Mlat mecem - 3 dmg" << endl ;
cout << "2. Stit - Snizi dmg ( 2 energie )" << endl;
}

void statymaga () {
cout << " Class: Mag" << endl ;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 4/4" << endl ;
cout << "Utok: 5" << endl ;
cout << "Mana: 8/8" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Ohniva strela - 4 dmg ( 2 many )" << endl ;
cout << "2. Poryv vetru - 7 dmg ( 4 many)" << endl;
cout << "3. Ledove kouzlo - omraci nepratele ( 4 many )" << endl ;
}
int main(){
int volba = 0 ;

while (true) {
    cout << " Vitej ve hre Runes" << endl ;
    cout << " vyber si classu:" << endl ;
    cout << "1 - Assasin" << endl ;
    cout << "2 - Lukostrelec" << endl ;
    cout << "3 - Rytir" << endl ;
    cout << "4 - Mag" << endl ;
    cin >> volba ;

switch (volba) {
case 1 :
    statyassasina() ;
    break ;
case 2 :
    statylukostrelce();
    break ;
case 3 :
    statyrytire();
    break ;
case 4:
    statymaga();
    break ;
default:
    cout << "Neplatna volba, zkus znovu." << endl ;
    continue;
    }
int potvrzeni ;
cout << " Chces tuto classu? ( 1 = ano, 0 = ne ):";
cin >> potvrzeni;

if (potvrzeni== 1){
    break ;
    }
}
cout << " Tva cesta zacina!" << endl ;
return 0 ;



}

