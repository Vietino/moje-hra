#include <iostream>
using namespace std;
void statyassasina () {
cout << " Class: Assasin" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 4/4" << endl ;
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
cout << "Utok: 5" << endl ;
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
void vesnice(int& zivoty, int& maxzivoty, int& energie, int& maxenergie, int& utok, int& zlato) {
    int volba;
    while (true) {
        cout << "\n--- Vesnice ---\n";
        cout << "Zlato: " << zlato << endl ;
        cout << "1. Doplnit zivoty (10 zlata)"<< endl ;
        cout << "2. Vylepsit max zivoty o 1 (15 zlata)"<< endl ;
        cout << "3. Vylepsit max energii o 1 (15 zlata)"<< endl ;
        cout << "4. Vylepsit utok o 1 (20 zlata)"<< endl ;
        cout << "5. Odejit z vesnice"<< endl ;
        cin >> volba;

        switch (volba) {
            case 1:
                if (zlato >= 10) {
                    zivoty = maxzivoty;
                    zlato -= 10;
                    cout << "Zivoty doplneny!"<< endl ;
                } else {
                    cout << "Nemas dostatek zlata."<< endl ;
                }
                break;
            case 2:
                if (zlato >= 15) {
                    maxzivoty++;
                    zlato -= 15;
                    cout << "Max zivoty vylepseny na " << maxzivoty << "!"<< endl ;
                } else {
                    cout << "Nemas dostatek zlata."<< endl ;
                }
                break;
            case 3:
                if (zlato >= 15) {
                    maxenergie++;
                    zlato -= 15;
                    cout << "Max energie vylepsena na " << maxenergie << "!"<< endl ;
                } else {
                    cout << "Nemas dostatek zlata."<< endl ;
                }
                break;
            case 4:
                if (zlato >= 20) {
                    utok++;
                    zlato -= 20;
                    cout << "Utok zvysen na " << utok << "!"<< endl ;
                } else {
                    cout << "Nemas dostatek zlata."<< endl ;
                }
                break;
            case 5:
                cout << "Odchazis z vesnice..."<< endl ;
                return;
            default:
                cout << "Neplatna volba."<< endl ;
        }
    }
}
int main(){
int volba = 0 ;
int maxzivoty = 0 ;
int zivoty = 0 ;
int maxenergie = 0 ;
int energie = 0 ;
int utok = 0 ;
int zlato = 50 ;

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
    zivoty=maxzivoty=4;
    energie=maxenergie=4;
    utok=5;
    break ;
case 2 :
    statylukostrelce();
    zivoty=maxzivoty=4;
    energie=maxenergie=5;
    utok=6;
    break ;
case 3 :
    statyrytire();
    zivoty=maxzivoty=7;
    energie=maxenergie=3;
    utok=4;
    break ;
case 4:
    statymaga();
    zivoty=maxzivoty=4;
    energie=maxenergie=8;
    utok=5;
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
vesnice(zivoty, maxzivoty, energie, maxenergie, utok, zlato);
return 0 ;



}

