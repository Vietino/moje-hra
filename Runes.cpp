#include <iostream>
using namespace std;
void statyassasina (){
cout << " Class: Assasin" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 4/4" << endl ;
cout << "Utok: 5" << endl ;
cout << "Energie: 4/4" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Rychly utok - 5 dmg ( 1 energie )" << endl ;
cout << "2. Utok ze zadu - 7 dmg ( 2 energie )"<< endl ;
}

void statylukostrelce (){
cout << " Class: Lukostrelec" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 4/4" << endl ;
cout << "Utok: 5" << endl ;
cout << "Energie: 6/6" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Strela - 4 dmg ( 1 energie) " << endl ;
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

void statymaga (){

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
void bitvamonstrum1(int classa, int &zivoty, int &energie, int utok, int &zlato, int &exp){
    int zivotyMonstra = 10;
    int utokMonstra = 3;
    int volba;
    bool omraceno = false;

    cout << endl << "Narazil jsi na zakerne monstrum!" << endl;

    while (zivoty > 0 && zivotyMonstra > 0){
        cout << endl << "Tve zivoty: " << zivoty << " | Energie/Mana: " << energie << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << endl;

        if (classa == 1){
            cout << "1. Rychly utok - 5 dmg (1 energie)" << endl;
            cout << "2. Utok ze zadu - 10 dmg (2 energie)" << endl;
        } else if (classa == 2){
            cout << "1. Strela - 4 dmg (1 energie)" << endl;
            cout << "2. Trojita strela - 3 dmg (2 energie)" << endl;
            cout << "3. Vzdalena strela - 7 dmg (4 energie)" << endl;
        } else if (classa == 3){
            cout << "1. Mlat mecem - 3 dmg (1 energie)" << endl;
            cout << "2. Stit - snizi dmg (2 energie)" << endl;
        } else if (classa == 4){
            cout << "1. Ohniva strela - 4 dmg (2 mana)" << endl;
            cout << "2. Poryv vetru - 7 dmg (4 mana)" << endl;
            cout << "3. Ledove kouzlo - omraci monstrum (4 mana)" << endl;
        }

        cout << "4. Odpocivat (+1 energie/mana)" << endl;
        cin >> volba;

        int dmg = 0;


        if (classa == 1){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 5;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 10;
            }
        } else if (classa == 2){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 4;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 3;
            } else if (volba == 3 && energie >= 4){
                energie -= 4;
                dmg = 7;
            }
        } else if (classa == 3) {
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 3;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                utokMonstra--;
                cout << "Pouzil jsi stit! Utok monstra se snizuje." << endl;
            }
        } else if (classa == 4) {
            if (volba == 1 && energie >= 2) {
                energie -= 2;
                dmg = 4;
            } else if (volba == 2 && energie >= 4) {
                energie -= 4;
                dmg = 7;
            } else if (volba == 3 && energie >= 4) {
                energie -= 4;
                omraceno = true;
                cout << "Seslal jsi ledove kouzlo! Monstrum je omraceno." << endl;
            }
        }

        if (volba == 4) {
            energie++;
            cout << "Odpocivas." << endl;
        } else if (dmg > 0) {
            zivotyMonstra -= dmg;
            cout << "Zpusobil jsi " << dmg << " poskozeni!" << endl;
        } else if (volba != 4 && !omraceno) {
            cout << "Nemas dost energie/many nebo neplatna volba." << endl;
        }

        if (zivotyMonstra > 0 && !omraceno) {
            zivoty -= utokMonstra;
            cout << "Monstrum te zasahlo za " << utokMonstra << "!" << endl;
        } else if (omraceno) {
            cout << "Monstrum je omraceno a neutoci tento tah!" << endl;
            omraceno = false;
        }
    }

    if (zivoty > 0) {
        cout << "Zvitezil jsi!" << endl;
        zlato += 10;
        exp += 5;
    } else {
        cout << "Byl jsi porazen..." << endl;
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
int classa = 0;
int exp = 0;
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
    classa = 1 ;
    statyassasina() ;
    zivoty=maxzivoty=4;
    energie=maxenergie=4;
    utok=5;
    break ;
case 2 :
    classa = 2 ;
    statylukostrelce();
    zivoty=maxzivoty=4;
    energie=maxenergie=5;
    utok=6;
    break ;
case 3 :
    classa = 3;
    statyrytire();
    zivoty=maxzivoty=7;
    energie=maxenergie=3;
    utok=4;
    break ;
case 4:
    classa = 4 ;
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
while (true ){
cout << " Jakou akci chces ted udelat" << endl ;
cout << "1 - vratit se zpet do vesnice " << endl ;
cout << "2 - Jit do bitvy" << endl ;
cout << "3 - zobrazit inventar (WIP) " << endl ;
cin >> volba ;
switch (volba) {
    case 1 : vesnice(zivoty, maxzivoty, energie, maxenergie, utok, zlato);
    break ;
    case 2 :
         bitvamonstrum1 (classa, zivoty, energie, utok, zlato, exp);
            if (zivoty <= 0) {
                cout << "\nUmrel jsi a hra se resetuje" << endl ;
                return 0;
                }

        break ;
    case 3 :
        break ;
    default : cout << "Neplatna volba, zkus znovu." << endl ;
}

}







}









