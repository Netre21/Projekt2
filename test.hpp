#include<stdlib.h>
#include"lib.hpp"
#include"klasapom.hpp"
#ifndef test_hpp
#define test_hpp




class tst1
{

slownik<int,int> x;
slownik<int,int> y;
public:
bool dodaj();

bool usun();

bool zmien();

bool szukaj();

bool rozmiar();

bool porownaj();

void wydrukuj();

};

class tst2
{

slownik<zes,zes> x;
slownik<zes,zes> y;
public:
bool dodaj();

bool usun();

bool zmien();

bool szukaj();

bool rozmiar();

bool porownaj();

void wydrukuj();

};
#endif // test
