/*
 * Makao.cpp
 *
 *  Created on: 09.8.2020
 *      Author: Kiko
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>
#include <time.h>

using namespace std;
enum boja { r, b, y, g, s };
class Karta
{
public:
    bool spec;
    boja boi;
    string power;

    Karta() {
        spec = 0;
        boi = r;
        power = "";
    }
    Karta(bool specv, boja boiv, string powerv)
    {
        spec = specv;
        power = powerv;
        boi = boiv;
    }
    Karta(const Karta& k)
    {
        spec = k.spec;
        boi = k.boi;
        power = k.power;
    }
    boja getboja()
    {
        return boi;
    }
    bool getspec()
    {
        return spec;
    }
    string getpower()
    {
        return power;
    }
    void pechati()
    {
        if (spec == 1) {
            cout << "Specijalna karta: " << power;
        }
        else
            cout << "Broj: " << power;
        if (boi != 4) {
            cout << " so boja ";
            switch ((int)boi) {
            case 0: cout << "crvena"; break;
            case 1: cout << "plava"; break;
            case 2: cout << "zolta"; break;
            case 3: cout << "zelena"; break;
            }
        }
        cout << endl;
    }
    Karta& operator=(const Karta& S) {
        if (this == &S)
        {
            return *this;
        }
        spec = S.spec;
        boi = S.boi;
        power = S.power;
        return *this;
    }
};


class shpil
{
public:
    Karta niza[60];
    int broj;

    shpil()
    {
        broj = 60;
        int i = 0;
        niza[i++] = Karta(0, r, "0");
        niza[i++] = Karta(0, r, "1");
        niza[i++] = Karta(0, r, "2");
        niza[i++] = Karta(0, r, "3");
        niza[i++] = Karta(0, r, "4");
        niza[i++] = Karta(0, r, "5");
        niza[i++] = Karta(0, r, "6");
        niza[i++] = Karta(0, r, "7");
        niza[i++] = Karta(0, r, "8");
        niza[i++] = Karta(0, r, "9");
        niza[i++] = Karta(0, b, "0");
        niza[i++] = Karta(0, b, "1");
        niza[i++] = Karta(0, b, "2");
        niza[i++] = Karta(0, b, "3");
        niza[i++] = Karta(0, b, "4");
        niza[i++] = Karta(0, b, "5");
        niza[i++] = Karta(0, b, "6");
        niza[i++] = Karta(0, b, "7");
        niza[i++] = Karta(0, b, "8");
        niza[i++] = Karta(0, b, "9");
        niza[i++] = Karta(0, y, "0");
        niza[i++] = Karta(0, y, "1");
        niza[i++] = Karta(0, y, "2");
        niza[i++] = Karta(0, y, "3");
        niza[i++] = Karta(0, y, "4");
        niza[i++] = Karta(0, y, "5");
        niza[i++] = Karta(0, y, "6");
        niza[i++] = Karta(0, y, "7");
        niza[i++] = Karta(0, y, "8");
        niza[i++] = Karta(0, y, "9");
        niza[i++] = Karta(0, g, "0");
        niza[i++] = Karta(0, g, "1");
        niza[i++] = Karta(0, g, "2");
        niza[i++] = Karta(0, g, "3");
        niza[i++] = Karta(0, g, "4");
        niza[i++] = Karta(0, g, "5");
        niza[i++] = Karta(0, g, "6");
        niza[i++] = Karta(0, g, "7");
        niza[i++] = Karta(0, g, "8");
        niza[i++] = Karta(0, g, "9");
        niza[i++] = Karta(1, r, "promena");
        niza[i++] = Karta(1, b, "promena");
        niza[i++] = Karta(1, y, "promena");
        niza[i++] = Karta(1, g, "promena");
        niza[i++] = Karta(1, r, "preskokni");
        niza[i++] = Karta(1, b, "preskokni");
        niza[i++] = Karta(1, y, "preskokni");
        niza[i++] = Karta(1, g, "preskokni");
        niza[i++] = Karta(1, r, "+2");
        niza[i++] = Karta(1, b, "+2");
        niza[i++] = Karta(1, y, "+2");
        niza[i++] = Karta(1, g, "+2");
        niza[i++] = Karta(1, r, "-1");
        niza[i++] = Karta(1, b, "-1");
        niza[i++] = Karta(1, y, "-1");
        niza[i++] = Karta(1, g, "-1");
        niza[i++] = Karta(1, s, "joker");
        niza[i++] = Karta(1, s, "joker");
        niza[i++] = Karta(1, s, "+4");
        niza[i++] = Karta(1, s, "+4");
    }
    int getbroj()
    {
        return broj;
    }
    Karta dodelikarta(int x)
    {
        Karta pom;
        pom = niza[x];
        for (int i = x; i < broj - 1; i++)
        {
            niza[i] = niza[i + 1];
        }
        broj--;
        return pom;
    }
};

class Igrach
{
private:
    string ime;
    Karta* karti;
    int brkarti;
public:
    Igrach(string imev = "PLAYER", int brkartiv = 0, Karta* kartiv = NULL)
    {
        brkarti = brkartiv;
        ime = imev;
        karti = new Karta[brkarti];
        for (int i = 0; i < brkarti; i++)
        {
            karti[i] = kartiv[i];
        }

    }

    ~Igrach()
    {
        delete[] karti;
    }
    int getbrkarti()
    {
        return brkarti;
    }
    string getime()
    {
        return ime;
    }
    void zemikarta(Karta x)
    {
        Karta* pomniza = new Karta[brkarti + 1];
        for (int i = 0; i < brkarti; i++)
        {
            pomniza[i].boi = karti[i].getboja();
            pomniza[i].power = karti[i].getpower();
            pomniza[i].spec = karti[i].getspec();
        }
        pomniza[brkarti].boi = x.getboja();
        pomniza[brkarti].power = x.getpower();
        pomniza[brkarti].spec = x.getspec();
        delete[] karti;
        karti = pomniza;
        brkarti++;
    }
    Karta dzirnikarta(int x)
    {
        return karti[x];
    }
    Karta frlikarta(int x)
    {
        Karta* pomniza = new Karta[brkarti - 1];
        Karta pom;
        for (int i = 0; i < x; i++)
        {
            pomniza[i] = karti[i];
        }
        pom = karti[x];
        for (int i = x + 1; i < brkarti; i++)
        {
            pomniza[i - 1] = karti[i];
        }
        brkarti--;
        delete[] karti;
        karti = pomniza;
        return pom;
    }
    bool isEmpty()
    {
        if (brkarti == 0)
        {
            return 1;
        }
        return 0;
    }
    Igrach& operator=(Igrach& S) {
        if (this == &S)
            return *this;
        delete[] karti;
        ime = S.ime;
        brkarti = S.brkarti;
        karti = new Karta[brkarti];
        for (int i = 0; i < brkarti; i++)
        {
            karti[i] = S.karti[i];
        }
        return *this;
    }
    void pechati() {
        cout << ime << " gi ima slednite karti: " << endl;
        for (int i = 0; i < brkarti; i++)
        {
            cout << i + 1 << ": ";
            karti[i].pechati();
        }
    }
};

struct Jazol
{
    Igrach igr;
    Jazol* next;
    Jazol* prev;
};
struct ListaIgrachi
{
    Jazol* head;
    Jazol* tail;
    void init()
    {
        head = tail = NULL;
    }
    void dodadiPos(Igrach x)
    {
        Jazol* pom = new Jazol;
        pom->igr = x;
        if (head == NULL)
        {
            pom->next = pom->prev = pom;
            head = tail = pom;
            return;
        }
        pom->next = head;
        pom->prev = tail;
        tail->next = pom;
        head->prev = pom;
        tail = pom;
    }
    void brishiPos() {
        if (head == NULL)
            return;
        if (head->next == head)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Jazol* pom = tail;
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        delete pom;
    }
    void brishiLista() {
        while (head != NULL)
            brishiPos();
    }
    void pechati() {
        if (head == NULL) {
            cout << "Listata e prazna." << endl;
            return;
        }
        cout << "Listata gi sodrzhi slednite elementi: ";
        Jazol* dvizi = head;
        while (dvizi != tail) {
            cout << dvizi->igr.getime() << "<->";
            dvizi = dvizi->next;
        }
        cout << tail->igr.getime() << endl;
    }
};

void promena(ListaIgrachi& igracista, Jazol** x)
{
    ListaIgrachi temp;
    temp.init();
    Jazol* dvizi6 = *x;
    cout << "Dvizi6" << endl;
    for (int i = 0; i < 4; i++)
    {
        temp.dodadiPos(dvizi6->prev->igr);
        dvizi6 = dvizi6->prev;
    }
    cout << "Posle for ciklus" << endl;
    temp.pechati();
    igracista = temp;
    *x = igracista.head;
}

void reshuffle(shpil& deck, Karta* frleniKarti, int& k)
{
    cout << "RESHUFLE" << endl;
    deck.broj = k - 1;
    cout << "BROJ NA KARTI SEGA VO DECK" << endl;
    cout << deck.getbroj();
    for (int i = 0; i < k - 1; i++)
        deck.niza[i] = frleniKarti[i];
    frleniKarti[0] = frleniKarti[k];
    k = 0;
}


string Game(ListaIgrachi& igracista, shpil& deck)
{
    //  int n=rand()%4;
    Karta frleniKarti[60];
    frleniKarti[0] = deck.dodelikarta(rand() % deck.getbroj());
    int k = 0;
    int n;
    bool smee;
    Jazol* dvizi = igracista.head;
    while (dvizi->prev->igr.isEmpty() == 0)
    {
        smee = false;
        Karta frlena = frleniKarti[k];
        cout << "POSLEDNO FRLENA KARTA E:" << endl;
        frlena.pechati();
        cout << endl;
        dvizi->igr.pechati();
        cout << "Koja karta sakas da ja frlis " << endl;
        cout << endl;
        cin >> n;
        //mozhe primer 0 da e vlechi karta ovde
        // if n==0, onaj kodon vlechi karta od podolu copy paste
        Karta izbrana = dvizi->igr.dzirnikarta(n - 1);
        if (frlena.boi == s) //ako ti e +4
            smee = true;
        else if (izbrana.boi == frlena.boi)
            smee = true;
        else if (izbrana.power == frlena.power)
            smee = true;
        else if (izbrana.spec == true)
        {
            if (izbrana.power == "joker")
                smee = true;
            else if (izbrana.power == "+4")
                smee = true;
        }
        if (smee == true)
            frleniKarti[++k] = dvizi->igr.frlikarta(n - 1);
        else
        {
            if (deck.getbroj() == 0)
                reshuffle(deck, frleniKarti, k);
            dvizi->igr.zemikarta(deck.dodelikarta(rand() % deck.getbroj()));
            dvizi = dvizi->next;
            continue;
        }



        if (frleniKarti[k].spec == true)
        {
            if (frleniKarti[k].power == "-1")
                continue;
            if (frleniKarti[k].power == "preskokni")
            {
                dvizi = dvizi->next->next;
            }
            if (frleniKarti[k].power == "+2")
            {
                for (int i = 0; i < 2; i++)
                {
                    if (deck.getbroj() == 0)
                        reshuffle(deck, frleniKarti, k);
                    dvizi->next->igr.zemikarta(deck.dodelikarta(rand() % deck.getbroj()));
                }
                dvizi = dvizi->next;
            }
            if (frleniKarti[k].power == "+4")
            {
                for (int i = 0; i < 4; i++)
                {
                    if (deck.getbroj() == 0)
                        reshuffle(deck, frleniKarti, k);
                    dvizi->next->igr.zemikarta(deck.dodelikarta(rand() % deck.getbroj()));
                }
                dvizi = dvizi->next;
            }
            if (frleniKarti[k].power == "joker")
            {
                dvizi = dvizi->next;
                cout << "Vnesi boja: " << endl;
                int boichka;
                cin >> boichka;
                frleniKarti[k].boi = (boja)boichka;
            }
            if (frleniKarti[k].power == "promena")
            {
                promena(igracista, &dvizi);
            }
        }
        else
            dvizi = dvizi->next;
    }
    return dvizi->prev->igr.getime();
}

int main()
{
    srand(time(NULL));
    cout << "GOOD LUCK WITH YOUR MAKAO GAME" << endl;
    ListaIgrachi igraciLista;
    igraciLista.init();
    Igrach players[4];
    shpil deck = shpil();
    for (int i = 0; i < 4; i++)
    {

        Karta karticinja[7];
        for (int j = 0; j < 7; j++)
        {
            karticinja[j] = deck.dodelikarta(rand() % deck.getbroj());
        }
        cout << "Vnesi ime na " << i + 1 << "iot igrach." << endl;
        string ime;
        cin >> ime;
        Igrach temp(ime, 7, karticinja);
        players[i] = temp;
    }
    igraciLista.dodadiPos(players[0]);
    igraciLista.dodadiPos(players[1]);
    igraciLista.dodadiPos(players[2]);
    igraciLista.dodadiPos(players[3]);
    //  igracista.pechati();
    string pobednik = Game(igraciLista, deck);
    cout << "POBEDNIK E: " << pobednik << endl;

    igraciLista.brishiLista();
    return 0;
}


