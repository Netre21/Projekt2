#include<iostream>
#include<stdlib.h>
#include"test.hpp"
#include"klasapom.hpp"
using namespace std;

bool tst1::dodaj()
    {
    x.add(2,4);
    y.add(7,8);
    if(x.szuk(2)==4)
        {
        cout<<"wynik poprawny dodania"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny dodania"<<endl;
        return false;
        }
    }

bool tst1::usun()
    {
    x.del(2);
    y.del(9);
    if(x.roz()==0)
        {
        cout<<"wynik poprawny usuniecia"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny usuniecia"<<endl;
        return false;
        }
    }

bool tst1::zmien()
    {
    x.change(2,90);
    y.change(7,14);
    if(x.szuk(2)==90)
        {
        cout<<"wynik poprawny zmiany"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny zmiany"<<endl;
        return false;
        }
    }

bool tst1::szukaj()
    {
    if(x.szuk(2)==90)
        {
        cout<<"wynik poprawny wyszukania"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny wyszukania"<<endl;
        return false;
        }
    }

bool tst1::rozmiar()
    {
    if(1==x.roz())
        {
        cout<<"poprawny rozmiar"<<endl;
        return true;
        }
    else
        {
        cout<<"poprawny rozmiar"<<endl;
        return false;
        }
    }

bool tst1::porownaj()
    {
    if(x.comp(&y)==0)
        {
        cout<<"wynik poprawny porownania"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny porownania"<<endl;
        return false;
        }
    }

void tst1::wydrukuj()
    {
    x.druk();
    cout<<endl;
    y.druk();
    }



bool tst2::dodaj()
    {
    zes a(2,4),b(7,8),c(4,5),d(23,42);
    x.add(a,b);
    y.add(c,d);
    if(x.szuk(a)==b)
        {
        cout<<"wynik poprawny dodania"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny dodania"<<endl;
        return false;
        }
    }

bool tst2::usun()
    {
    zes a(2,4),b(4,5);
    int ro=0;
    x.del(a);
    y.del(b);
    if(x.roz()==ro)
        {
        cout<<"wynik poprawny usuniecia"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny usuniecia"<<endl;
        return false;
        }
    }

bool tst2::zmien()
    {
    zes a(2,4),b(34,54),c(4,5),d(23,42);
    x.change(a,b);
    y.change(c,d);
    if(x.szuk(a)==b)
        {
        cout<<"wynik poprawny zmiany"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny zmiany"<<endl;
        return false;
        }
    }

bool tst2::szukaj()
    {
    zes a(2,4), b(4,5);
    zes wa(34,54),wb(23,42);
    if(x.szuk(a)==wa)
        {
        cout<<"wynik poprawny wyszukania"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny wyszukania"<<endl;
        return false;
        }
    }

bool tst2::rozmiar()
    {
    if(1==x.roz())
        {
        cout<<"poprawny rozmiar"<<endl;
        return true;
        }
    else
        {
        cout<<"bledny rozmiar"<<endl;
        return false;
        }
    }

bool tst2::porownaj()
    {
    if(x.comp(&y)==0)
        {
        cout<<"wynik poprawny porownania"<<endl;
        return true;
        }
    else
        {
        cout<<"wynik bledny porownania"<<endl;
        return false;
        }
    }

void tst2::wydrukuj()
    {
    x.druk();
    cout<<endl;
    y.druk();
    }


