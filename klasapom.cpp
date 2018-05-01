#include<stdlib.h>
#include<iostream>
#include"klasapom.hpp"
using namespace std;


zes::zes(int x,int y)
    {
    a=x;
    b=y;
    }
int zes::operator==(zes &p)
    {
    if(a==p.a && b==p.b)
        {
        return 1;
        }
    return 0;
    }
zes& zes::operator=(zes const&p)
        {
        a=p.a;
        b=p.b;
        }
int zes::operator!=(zes &p)
    {
    if(a!=p.a || b!=p.b)
        {
        return 1;
        }
    return 0;
    }
istream& operator>>(istream& in, zes& p)
    {
    in>>p.a>>p.b;
    return in;
    }
ostream& operator<<(ostream& out, zes& p)
    {
    out<<p.a<<"+"<<p.b<<"i";
    }


