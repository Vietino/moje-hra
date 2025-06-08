
#include <iostream>
using namespace std;
void statyassasina (){
cout << " Class: Assasin" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 15/15" << endl ;
cout << "Utok: 5" << endl ;
cout << "Energie: 7/7" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Rychly utok - 5 dmg ( 1 energie )" << endl ;
cout << "2. Utok ze zadu - 7 dmg ( 2 energie )"<< endl ;
}

void statylukostrelce (){
cout << " Class: Lukostrelec" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 17/17" << endl ;
cout << "Utok: 6" << endl ;
cout << "Energie: 9/9" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Strela - 4 dmg ( 1 energie) " << endl ;
cout << "2. trojita strela - 3 dmg vsem ( 2 energie )" << endl ;
cout << "3. Vzdalena strela - 7 dmg ( 4 energie )" << endl ;
}

void statyrytire (){
cout << " Class: Rytir" <<endl;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 20/20" << endl ;
cout << "Utok: 5" << endl ;
cout << "Energie: 14/14" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Utok mecem - 3 dmg" << endl ;
cout << "2. Stit - Snizi dmg ( 2 energie )" << endl;
cout << "3. Berserk - Zvysi svuj dmg (4 energie )" << endl ;
}

void statymaga (){

cout << " Class: Mag" << endl ;
cout << " Statistiky :" << endl ;
cout << "Zivoty: 12/12" << endl ;
cout << "Utok: 7" << endl ;
cout << "Mana: 10/10" << endl ;
cout << " Schopnosti:" << endl ;
cout << "1. Ohniva strela - 4 dmg ( 2 many )" << endl ;
cout << "2. Poryv vetru - 7 dmg ( 4 many)" << endl;
cout << "3. Ledove kouzlo - omraci nepratele ( 4 many )" << endl ;
}
void vesnice(int& zivoty, int& maxzivoty, int& energie, int& maxenergie, int& utok, int& zlato) {

    int volba;
    while (true) {
        cout << " Zivoty: " << zivoty << endl ;
        cout << " Energie: " << energie <<endl ;
        cout << " Utok: "<< utok ;
        cout << " \n ============ \n" ;
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
            cout << "1. Rychly utok - "<< 5 + utok  <<" dmg (1 energie)" << endl;
            cout << "2. Utok ze zadu - " << 10 + utok <<" dmg (2 energie)" << endl;
        } else if (classa == 2){
            cout << "1. Strela - " << 4+ utok << " dmg (1 energie)" << endl;
            cout << "2. Trojita strela - "<< 3 + utok << "dmg (2 energie)" << endl;
            cout << "3. Vzdalena strela - "<< 7 + utok << "dmg (4 energie)" << endl;
        } else if (classa == 3){
            cout << "1. Utok mecem - "<<3 + utok <<" dmg (1 energie)" << endl;
            cout << "2. Stit - snizi dmg (2 energie)" << endl;
        } else if (classa == 4){
            cout << "1. Ohniva strela - "<< 4 + utok<<" dmg (2 mana)" << endl;
            cout << "2. Poryv vetru - " <<7 + utok <<" dmg (4 mana)" << endl;
            cout << "3. Ledove kouzlo - omraci monstrum (4 mana)" << endl;
        }

        cout << "4. Odpocivat (+4 energie/mana)" << endl;
        cin >> volba;

        int dmg = 0;


        if (classa == 1){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 5 + utok ;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 10 + utok;
            }
        } else if (classa == 2){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 4 + utok;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 3+ utok ;
            } else if (volba == 3 && energie >= 4){
                energie -= 4;
                dmg = 7 + utok;
            }
        } else if (classa == 3) {
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 3 + utok;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                utokMonstra--;
                cout << "Pouzil jsi stit! Utok monstra se snizuje." << endl;
            }
        } else if (classa == 4) {
            if (volba == 1 && energie >= 2) {
                energie -= 2;
                dmg = 4 + utok;
            } else if (volba == 2 && energie >= 4) {
                energie -= 4;
                dmg = 7 + utok;
            } else if (volba == 3 && energie >= 4) {
                energie -= 4;
                omraceno = true;
                cout << "Seslal jsi ledove kouzlo! Monstrum je omraceno." << endl;
            }
        }

        if (volba == 4) {
            energie+4;
            cout << "Odpocivas." << endl;
        } else if (dmg > 0) {
            zivotyMonstra -= dmg;
            cout << "Zpusobil jsi " << dmg << " poskozeni!" << endl;
        } else if (volba != 4 && !omraceno) {
            cout << "Nemas dost energie nebo neplatna volba." << endl;
        }

        if(zivotyMonstra > 0 && !omraceno){
            zivoty -= utokMonstra;
            cout << "Monstrum te zasahlo za " << utokMonstra << "!" << endl;
        } else if (omraceno) {
            cout << "Monstrum je omraceno a neutoci tento tah!" << endl;
            omraceno = false;
        }
    }

    if (zivoty > 0) {
        cout << "Zvitezil jsi!" << endl;
        zlato += 20;
        exp += 5;
    } else {
        cout << "Byl jsi porazen..." << endl;
    }
}
void bitvamonstrum2(int classa, int &zivoty, int &energie, int utok, int &zlato, int &exp){
    int zivotyMonstra = 25;
    int utokMonstra = 6;
    int volba;
    bool omraceno = false;

    cout << endl << "Narazil jsi na silnejsi monstrum mini boss!" << endl;

    while (zivoty > 0 && zivotyMonstra > 0){
        cout << endl << "Tve zivoty: " << zivoty << " | Energie/Mana: " << energie << endl;
        cout << "Zivoty monstra: " << zivotyMonstra << endl;
if (classa == 1){
            cout << "1. Rychly utok - "<< 5 + utok  <<" dmg (1 energie)" << endl;
            cout << "2. Utok ze zadu - " << 10 + utok <<" dmg (2 energie)" << endl;
        } else if (classa == 2){
            cout << "1. Strela -" << 4+ utok << " dmg (1 energie)" << endl;
            cout << "2. Trojita strela - "<< 3 + utok << " dmg (2 energie)" << endl;
            cout << "3. Vzdalena strela - "<< 7 + utok << " dmg (4 energie)" << endl;
        } else if (classa == 3){
            cout << "1. Utok mecem -"<<3 + utok <<"dmg (1 energie)" << endl;
            cout << "2. Stit - snizi dmg (2 energie)" << endl;
        } else if (classa == 4){
            cout << "1. Ohniva strela - "<< 4 + utok<<" dmg (2 mana)" << endl;
            cout << "2. Poryv vetru - " <<7 + utok <<" dmg (4 mana)" << endl;
            cout << "3. Ledove kouzlo - omraci monstrum (4 mana)" << endl;
        }

        cout << "4. Odpocivat (+4 energie/mana)" << endl;
        cin >> volba;


        int dmg = 0;

        if (classa == 1){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 5+ utok;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 10 + utok;
            }
        } else if (classa == 2){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 4 + utok;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 3 + utok;
            } else if (volba == 3 && energie >= 4){
                energie -= 4;
                dmg = 7 + utok ;
            }
        } else if (classa == 3){
            if(volba == 1 && energie >= 1){
                energie--;
                dmg = 3 + utok ;
            }else if (volba == 2 && energie >= 2){
                energie -= 2;
                utokMonstra--;
                cout << "Pouzil jsi stit! Utok monstra se snizuje." << endl;
            }
        }else if (classa == 4){
            if(volba == 1 && energie >= 2){
                energie -= 2;
                dmg = 4 + utok ;
            }else if (volba == 2 && energie >= 4){
                energie -= 4;
                dmg = 7 + utok ;
            }else if (volba == 3 && energie >= 4){
                energie -= 4;
                omraceno = true;
                cout << "Seslal jsi ledove kouzlo! Monstrum je omraceno." << endl;
            }
        }

        if (volba == 4){
            energie+4;
            cout << "Odpocivas." << endl;
        } else if (dmg > 0){
            zivotyMonstra -= dmg;
            cout << "Zpusobil jsi " << dmg << " poskozeni!" << endl;
        } else if (volba != 4 && !omraceno) {
            cout << "Nemas dost energie/many nebo neplatna volba." << endl;
        }

        if(zivotyMonstra > 0 && !omraceno){
            zivoty -= utokMonstra;
            cout << "Monstrum te zasahlo za " << utokMonstra << "!" << endl;
        }else if (omraceno){
            cout << "Monstrum je omraceno a neutoci tento tah!" << endl;
            omraceno = false;
        }
    }

    if (zivoty > 0) {
        cout << "Zvitezil jsi nad silnejsim monstrem!" << endl;
        zlato += 20;
        exp += 10;
    }else{
        cout << "Byl jsi porazen..." << endl;
    }
}
void bitvaTriMonstraNajednou(int classa, int &zivoty, int &energie, int utok, int &zlato, int &exp) {
    int zivotyMonstra[3] = {10, 12, 8};
    int utokMonstra[3] = {3, 2, 4};
    bool omraceni[3] = {false, false, false};
    int volba;
    int cil;

    cout << endl << "Narazil jsi na 3 nepratelska monstra!" << endl;

    while (zivoty > 0 && (zivotyMonstra[0] > 0 || zivotyMonstra[1] > 0 || zivotyMonstra[2] > 0)) {
        cout << endl << "Tve zivoty: " << zivoty << " | Energie/Mana: " << energie << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Monstrum #" << i + 1 << ": " << zivotyMonstra[i] << " zivotu" << (omraceni[i] ? " (omraceno)" : "") << endl;
        }

       if (classa == 1){
            cout << "1. Rychly utok - "<< 5 + utok  <<"dmg (1 energie)" << endl;
            cout << "2. Utok ze zadu - " << 10 + utok <<"dmg (2 energie)" << endl;
        } else if (classa == 2){
            cout << "1. Strela -" << 4+ utok << "dmg (1 energie)" << endl;
            cout << "2. Trojita strela - "<< 3 + utok << "dmg (2 energie)" << endl;
            cout << "3. Vzdalena strela - "<< 7 + utok << "dmg (4 energie)" << endl;
        } else if (classa == 3){
            cout << "1. Utok mecem -"<<3 + utok <<"dmg (1 energie)" << endl;
            cout << "2. Stit - snizi dmg (2 energie)" << endl;
        } else if (classa == 4){
            cout << "1. Ohniva strela - "<< 4 + utok<<"dmg (2 mana)" << endl;
            cout << "2. Poryv vetru - " <<7 + utok <<"dmg (4 mana)" << endl;
            cout << "3. Ledove kouzlo - omraci monstrum (4 mana)" << endl;
        }

        cout << "4. Odpocivat (+4 energie/mana)" << endl;
        cin >> volba;

        int dmg = 0;
        bool platnyUtok = true;

        if ((volba != 5 && !(classa == 2 && volba == 2)) && !(classa == 4 && volba == 1)) {
            cout << "Vyber si monstrum (1 – 3): ";
            cin >> cil;
            cil--;
            if (cil < 0 || cil > 2 || zivotyMonstra[cil] <= 0) {
                cout << "Neplatny cil!" << endl;
                continue;
            }
        }

        if (classa == 1) {
            if (volba == 1 && energie >= 1) {
                energie--;
                dmg = 5+utok;
                zivotyMonstra[cil] -= dmg;
            } else if (volba == 2 && energie >= 2) {
                energie -= 2;
                dmg = 10+utok;
                zivotyMonstra[cil] -= dmg;
            } else platnyUtok = false;
        } else if (classa == 2) {
            if (volba == 1 && energie >= 1) {
                energie--;
                dmg = 4+utok;
                zivotyMonstra[cil] -= dmg;
            } else if (volba == 2 && energie >= 2) {
                energie -= 2;
                dmg = 3+utok;
                for (int i = 0; i < 3; i++) {
                    if (zivotyMonstra[i] > 0) {
                        zivotyMonstra[i] -= dmg;
                        cout << "Zasahls monstrum #" << i + 1 << " za " << dmg << " dmg!" << endl;
                    }
                }
            } else if (volba == 3 && energie >= 4) {
                energie -= 4;
                dmg = 7+utok;
                zivotyMonstra[cil] -= dmg;
            } else platnyUtok = false;
        } else if (classa == 3) {
            if (volba == 1 && energie >= 1) {
                energie--;
                dmg = 3+utok;
                zivotyMonstra[cil] -= dmg;
            } else if (volba == 2 && energie >= 2) {
                energie -= 2;
                cout << "Pouzil jsi stit! Snizuje utok vsech monster o 1 na tento tah." << endl;
                for (int i = 0; i < 3; i++) {
                    if (utokMonstra[i] > 0) utokMonstra[i]--;
                }
            } else platnyUtok = false;
        } else if (classa == 4) {
            if (volba == 1 && energie >= 2) {
                energie -= 2;
                dmg = 4+utok;
                for (int i = 0; i < 3; i++) {
                    if (zivotyMonstra[i] > 0) {
                        zivotyMonstra[i] -= dmg;
                        cout << "Ohniva strela zasahla monstrum #" << i + 1 << " za " << dmg << " dmg!" << endl;
                    }
                }
            } else if (volba == 2 && energie >= 4) {
                energie -= 4;
                dmg = 7;
                zivotyMonstra[cil] -= dmg;
            } else if (volba == 3 && energie >= 4) {
                energie -= 4;
                cout << "Omraceni vsech monster!" << endl;
                for (int i = 0; i < 3; i++) omraceni[i] = true;
            } else platnyUtok = false;
        }

        if (volba == 5) {
            energie++;
            cout << "Odpocivas a obnovujes 1 energii/mana." << endl;
        } else if (!platnyUtok) {
            cout << "Nemas dost energie/many nebo neplatna volba." << endl;
        } else if (volba != 2 && volba != 1) {
            cout << "Zasahl jsi monstrum #" << cil + 1 << " za " << dmg << " dmg!" << endl;
        }

        for (int i = 0; i < 3; i++) {
            if (zivotyMonstra[i] > 0 && !omraceni[i]) {
                zivoty -= utokMonstra[i];
                cout << "Monstrum #" << i + 1 << " te zasahlo za " << utokMonstra[i] << "!" << endl;
            } else if (omraceni[i]) {
                cout << "Monstrum #" << i + 1 << " je omraceno a neutoci!" << endl;
                omraceni[i] = false;
            }
        }
    }

    if (zivoty > 0) {
        cout << endl << "Porazil jsi vsechna monstra!" << endl;
        zlato += 15;
        exp += 10;
    } else {
        cout << endl << "Byl jsi porazen..." << endl;
    }
}
void bitvathornhost(int classa, int &zivoty, int &energie, int utok, int &zlato, int &exp){
    int zivotyMonstra = 60;
    int maxHPMonstra = zivotyMonstra;
    int kolo = 1;
    int volba;
    bool omraceno = false;

    cout << endl << "Narazil jsi na finalniho bosse: THORNHOST!" << endl;

    while (zivoty > 0 && zivotyMonstra > 0){
        cout << endl << "Kolo " << kolo << endl;
        cout << "Tve zivoty: " << zivoty << " | Energie/Mana: " << energie << endl;
        cout << "Zivoty Thornhosta: " << zivotyMonstra << endl;


        if (classa == 1){
            cout << "1. Rychly utok - "<< 5 + utok  <<" dmg (1 energie)" << endl;
            cout << "2. Utok ze zadu - " << 10 + utok <<" dmg (2 energie)" << endl;
        } else if (classa == 2){
            cout << "1. Strela - "<< 4 + utok << " dmg (1 energie)" << endl;
            cout << "2. Trojita strela - "<< 3 + utok << " dmg (2 energie)" << endl;
            cout << "3. Vzdalena strela - "<< 7 + utok << " dmg (4 energie)" << endl;
        } else if (classa == 3){
            cout << "1. Utok mecem - "<< 3 + utok << " dmg (1 energie)" << endl;
            cout << "2. Stit - snizi dmg (2 energie)" << endl;
        } else if (classa == 4){
            cout << "1. Ohniva strela - "<< 4 + utok << " dmg (2 mana)" << endl;
            cout << "2. Poryv vetru - "<< 7 + utok << " dmg (4 mana)" << endl;
            cout << "3. Ledove kouzlo - omraci monstrum (4 mana)" << endl;
        }

        cout << "4. Odpocivat (+ energie/mana)" << endl;
        cin >> volba;

        int dmg = 0;


        if (classa == 1){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 5 + utok;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 10 + utok;
            }
        } else if (classa == 2){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 4 + utok;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                dmg = 3 + utok;
            } else if (volba == 3 && energie >= 4){
                energie -= 4;
                dmg = 7 + utok;
            }
        } else if (classa == 3){
            if (volba == 1 && energie >= 1){
                energie--;
                dmg = 3 + utok;
            } else if (volba == 2 && energie >= 2){
                energie -= 2;
                cout << "Pouzil jsi stit. Ziskavas obranu." << endl;

            }
        } else if (classa == 4){
            if (volba == 1 && energie >= 2){
                energie -= 2;
                dmg = 4 + utok;
            } else if (volba == 2 && energie >= 4){
                energie -= 4;
                dmg = 7 + utok;
            } else if (volba == 3 && energie >= 4){
                energie -= 4;
                omraceno = true;
                cout << "Monstrum je omraceno!" << endl;
            }
        }

        if (volba == 4){
            energie++;
            cout << "Odpocivas." << endl;
        } else if (dmg > 0){
            zivotyMonstra -= dmg;
            cout << "Zpusobil jsi " << dmg << " poskozeni!" << endl;


            int odrazene = dmg / 3;
            zivoty -= odrazene;
            cout << "Thornhost odrazil " << odrazene << " poskozeni zpet!" << endl;
        } else if (volba != 4 && !omraceno) {
            cout << "Neplatna volba nebo nedostatek energie." << endl;
        }


        if (zivotyMonstra > 0 && !omraceno){
            if ((zivotyMonstra * 100 / maxHPMonstra) <= 30){

                cout << "THORNHOST VYBUCHUJE TRNY!" << endl;
                cout << "Oba utrpi 10 poskozeni!" << endl;
                zivoty -= 10;
                zivotyMonstra -= 10;
            } else if (kolo % 2 == 0){
                cout << "Thornhost vystrelil trny do vsech smeru!" << endl;
                cout << "Ignorujes obranu, utrpel jsi 8 poskozeni!" << endl;
                zivoty -= 8;
            } else {
                cout << "Thornhost se pripravuje k utoku..." << endl;
            }
        } else if (omraceno){
            cout << "Thornhost je omracen a neutoci!" << endl;
            omraceno = false;
        }

        kolo++;
    }

    if (zivoty > 0){
        cout << endl << "Zvitezil jsi nad finalnim bossem THORNHOSTEM!" << endl;
        zlato += 50;
        exp += 30;
    } else {
        cout << endl << "Byl jsi porazen Thornhostem..." << endl;
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
    cout << " \n ============== \n ";

switch (volba) {
case 1 :
    classa = 1 ;
    statyassasina() ;
    zivoty=maxzivoty=15;
    energie=maxenergie=7;
    utok=7;
    break ;
case 2 :
    classa = 2 ;
    statylukostrelce();
    zivoty=maxzivoty=17;
    energie=maxenergie=9;
    utok=6;
    break ;
case 3 :
    classa = 3;
    statyrytire();
    zivoty=maxzivoty=20;
    energie=maxenergie=14;
    utok=5;
    break ;
case 4:
    classa = 4 ;
    statymaga();
    zivoty=maxzivoty=12;
    energie=maxenergie=10;
    utok=7;
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
energie = maxenergie;
do {
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
}}while( volba!=2);
cout << " Vitej zpet ve vesnici " << endl ;
vesnice (zivoty, maxzivoty, energie, maxenergie, utok, zlato ) ;
energie=maxenergie ;
do {
cout << " Jakou akci chces ted udelat" << endl ;
cout << "1 - vratit se zpet do vesnice " << endl ;
cout << "2 - Jit do bitvy" << endl ;
cout << "3 - zobrazit inventar (WIP) " << endl ;
cin >> volba ;
switch (volba) {
    case 1 : vesnice(zivoty, maxzivoty, energie, maxenergie, utok, zlato);

    break ;
    case 2 :
         bitvamonstrum2 (classa, zivoty, energie, utok, zlato, exp);

            if (zivoty <= 0) {
                cout << "\nUmrel jsi a hra se resetuje" << endl ;
                return 0;
                }

        break ;
    case 3 :
        break ;
    default : cout << "Neplatna volba, zkus znovu." << endl ;
}}while( volba!=2);
cout <<endl ;
cout << " Narazilo na tebe tri mosntra !" << endl ;

bitvaTriMonstraNajednou (classa, zivoty, energie, utok, zlato, exp) ;
if (zivoty <= 0) {
                cout << "\nUmrel jsi a hra se resetuje" << endl ;
                return 0;
                }
cout << " Vitej zpet ve vesnici " << endl ;
vesnice (zivoty, maxzivoty, energie, maxenergie, utok, zlato ) ;
energie=maxenergie ;
do {
cout << " Jakou akci chces ted udelat" << endl ;
cout << "1 - vratit se zpet do vesnice " << endl ;
cout << "2 - Jit do bitvy" << endl ;
cout << "3 - zobrazit inventar (WIP) " << endl ;
cin >> volba ;
switch (volba) {
    case 1 : vesnice(zivoty, maxzivoty, energie, maxenergie, utok, zlato);

    break ;
    case 2 :
         bitvathornhost(classa, zivoty, energie, utok, zlato, exp);

            if (zivoty <= 0) {
                cout << "\nUmrel jsi a hra se resetuje" << endl ;
                return 0;
                }

        break ;
    case 3 :
        break ;
    default : cout << "Neplatna volba, zkus znovu." << endl ;
}}while( volba!=2);








}









