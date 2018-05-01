#include<stdlib.h>
#include<iostream>
#ifndef klasapom_hpp
#define klasapom_hpp
using namespace std;
class zes//klasa, na której bêdziemy testowaæ nasz szablon (typ, który nie jest wbudowany)
{
int a;
int b;
public:
zes(int x=0,int y=0);

int operator==(zes &p);

zes& operator=(zes const&p);

int operator!=(zes &p);

friend istream& operator>>(istream& in, zes &p);

friend ostream& operator<<(ostream& out, zes &p);


};

#endif
