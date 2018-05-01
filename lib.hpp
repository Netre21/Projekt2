#include<stdlib.h>
#include<iostream>
#ifndef lib_hpp
#define lib_hpp

using namespace std;

template <typename T, typename K>
class slownik
{
struct dic //deklaracja struktury, która bêdzie przechowywa³a nasz klucz i wartoœæ i wskaŸnik na nastêpny element tego samego typu
    {
    K klucz;//po tym bedziemy rozró¿niaæ elementy
    T wart;//wartoœæ elementu
    dic* nast;//wskaŸnik na nastêpny element naszego slownika
    };
dic* A;//poczatek slownika (wskaznik na pierwszy element)
public:

slownik()//konstruktor ustawiaj¹cy wskaŸnik na NULL
    {
    A=NULL;
    }
~slownik()//destruktor
    {
    dic *akt=A;
    dic *temp=A;
    if(A==NULL)//usun wskaznik jesli wskazuje on na NULL
        {
        delete A;
        }
    else // w przeciwnym wypadku
        {
        while(akt->nast!=NULL)//usuwaj kolejne elementy az do ostatniego
            {
            akt=akt->nast;
            delete temp;
            temp=akt;
            }
        delete akt;
        }
    }
void add(K a,T b)//dodaj element
    {
    dic *akt=A;
    if(A==NULL)//wstawiamy na pocz¹tek jesli A wynosi NULL
        {
        A=new dic;
        A->klucz=a;
        A->wart=b;
        A->nast=NULL;
        return;
        }
    if(akt->klucz==a)//sprawdzenie warunku powtorzenia sie klucza
        {
        cout<<"klucz sie powtorzyl"<<endl;
        return;
        }
    while(akt->nast!=NULL)//idziemy na koniec slownika
        {
        akt=akt->nast;
        if(akt->klucz==a)
            {
            cout<<"klucz sie powtorzyl"<<endl;
            return;
            }

        }// po petli while akt wskazuje na ostatni element slownika
    akt->nast=new dic;
    akt=akt->nast;
    akt->klucz=a;
    akt->wart=b;
    akt->nast=NULL;
    }
void del(K a)//usuniecie elementu o podanym kluczu
    {
    dic *akt=A;
    dic *temp=A;
    if(A==NULL)//sprawdzamy czy slownik jest pusty
        {
        cout<<"brak elementow do usuniecia"<<endl;
        return;
        }
    if(A->klucz==a)//sprawdzamy czy pierwszy element jest tym, ktory chcey usunac
        {
        A=akt->nast;
        delete akt;
        return;
        }
    while(akt->klucz!=a)//szukamy do momentu znalezienia
        {
        temp=akt;
        if(akt->nast==NULL)//warunek sprawdzaj¹cy czy juz jestesmy na koncu slownika
            {
            cout<<"nie ma takiego elementu."<<endl;
            return;
            }
        akt=akt->nast;
        }


    if(akt->nast==NULL)//zmiana wskaŸnika nast wskazuj¹cego na element usuniety na kolejny w slowniku lub NULL
        {
        temp->nast=NULL;
        }
    else
        {
        temp->nast=akt->nast;
        }
    delete akt;
    }
void change(K a, T b)//zmieniamy wartosc elementu o kluczu a na b
    {
    dic *akt=A;
    if(A==NULL)//sprawdzenie czy kolejka jest pusta
        {
        cout<<"nie ma takiego elementu"<<endl;
        return;
        }
    while(akt->klucz!=a)//szukamy do momentu znalezienia
        {
        if(akt->nast==NULL)//sprawdzamy czy jestesmy juz na koncu slownika
            {
            cout<<"nie ma takiego elementu."<<endl;
            return;
            }
        akt=akt->nast;
        }
    akt->wart=b;//zmiana wartosci
    }
T szuk(K a)//zwracanie wartoœci elementu o kluczu a
    {
    dic *akt=A;
    if(A==NULL)//sprawdzenie czy slownik jest pusty
        {
        cout<<"slownik jest pusty"<<endl;
        return NULL;
        }
    while(akt->klucz!=a)//szukamy do momentu znalezienia
        {
        if(akt->nast==NULL)//sprawdzenie czy jestesmy na koncu slownika
            {
            cout<<"nie ma takiego elementu."<<endl;
            return NULL;
            }
        akt=akt->nast;
        }
    return akt->wart;//zwracamy wartosc tego elementu
    }
int roz()//metoda zwraca wielkoœæ slownika (ilosc elementów)
    {
    dic *akt=A;
    int iter=1;//zaczynamy od 1 bo nie liczymy ostatniego elementu w slownika (zmienna zapamiêtuj¹ca ilosc elementów)
    if(A==NULL)//jeœli nie ma niczego w slowniku
        {
        iter=iter-1;
        return iter;
        }
    while(akt->nast!=NULL)//zliczamy wszystkie elementy poza ostatnim
        {
        iter=iter+1;
        akt=akt->nast;
        }
    return iter;
    }
void druk()//wypisuje po kolei slownik parami klucz wartosc
    {
    dic *akt=A;
    if(A==NULL)//sprawdzenie czy slownik jest pusty
       {
        cout<<"slownik jest pusty"<<endl;
        return;
       }
    while(akt->nast!=NULL)//wypisywanie kolejnych elementow zaczynaj¹c od pierwszego do przedostatniego
        {
        cout<<"klucz: "<<akt->klucz<<" wartosc: "<<akt->wart<<endl;
        akt=akt->nast;
        }
    cout<<"klucz: "<<akt->klucz<<" wartosc: "<<akt->wart<<endl;//wypisanie ostatniego elementu
    }
int comp(slownik* B)//porownujemy dwa slowniki
    {
    dic *aktA=A;
    dic *aktB=B->A;
    if(A==NULL || B->A==NULL)//sprawdzamy, czy ktorys jest pusty
        {
        if(A==B->A)//jezeli oba sa puste to zwracamy 1
            {
            return 1;
            }
        return 0;//jezeli jeden jest pusty, a drugi nie to zwracamy 0
        }
    if(aktA->klucz!=aktB->klucz)//je¿eli kolejne klucze siê nie zgadzaj¹ (czyli klucz pierwszego elementu z pierwszym elementem i analogicznie dalej)
            {
            return 0;
            }
        if(aktA->wart!=aktB->wart)//sprawdzenie czy kolejne wartosci sa sobie rowne tak samo jak klucze ( dla kolejnych elementów)
            {
            return 0;
            }
    while(aktA->nast!=NULL && aktB->nast!=NULL)//pêtla siê obraca do momentu, gdy przynajmniej jeden ze s³owników siê skoñczy
        {
        if(aktA->klucz!=aktB->klucz)
            {
            return 0;
            }
        if(aktA->wart!=aktB->wart)
            {
            return 0;
            }
        aktA=aktA->nast;//przesuniecie wskaznika
        aktB=aktB->nast;//przesuniecie wskaznika
        }
    if(aktA->nast!=aktB->nast)//sprawdzamy czy oba nie skonczyly sie razem
        {
        return 0;
        }
    else
        {
        return 1;
        }
    }
};
#endif // lib_hpp
