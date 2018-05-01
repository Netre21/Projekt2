#include<stdlib.h>
#include<iostream>
#include"lib.hpp"
#include"test.hpp"
#include"klasapom.hpp"

using namespace std;

int main()
{
cout<<"typ wbudowany"<<endl;
tst1 T;//wywolujemy metody klasy tst1, by sprawdziæ poprawnoœæ dzialania szablonu (typ wbudowany)
T.dodaj();
T.zmien();
T.szukaj();
T.rozmiar();
T.porownaj();
T.wydrukuj();
T.usun();
T.wydrukuj();
cout<<"typ uzytkownika"<<endl;
tst2 Tw;//wywolujemy metody klasy tst2, by sprawdziæ poprawnoœæ dzialania szablonu (typ stworzony przez u¿ytkownika)
Tw.dodaj();
Tw.zmien();
Tw.szukaj();
Tw.rozmiar();
Tw.porownaj();
Tw.wydrukuj();
Tw.usun();
Tw.wydrukuj();
}
