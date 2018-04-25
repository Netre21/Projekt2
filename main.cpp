#include<stdlib.h>
#include<iostream>
#include"lib.h"

using namespace std;



class tst1
{

slownik<int,int> x;
slownik<int,int> y;
public:
void test1(int a, int b, int c, int d)
    {
    x.add(a,b);
    y.add(c,d);
    if(x.szuk(a)==b)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    if(y.szuk(c)==d)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test2(int a, int b,int ro)
    {
    x.del(a);
    y.del(b);
    if(x.roz()==ro)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    if(y.roz()==ro)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test3(int a, int b, int c, int d)
    {
    x.change(a,b);
    y.change(c,d);
    if(x.szuk(a)==b)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    if(y.szuk(c)==d)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test4(int a, int b, int wa, int wb)
    {
    if(x.szuk(a)==wa)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }

    if(y.szuk(b)==wb)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test5(int w)
    {
    if(w==x.roz() && w==y.roz())
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test6(int w)
    {
    if(x.comp(&y)==w)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test7()
    {
    x.druk();
    cout<<endl;
    y.druk();
    }
};

class tst2
{

slownik<zes,zes> x;
slownik<zes,zes> y;
public:
void test1(zes a, zes b, zes c, zes d)
    {
    x.add(a,b);
    y.add(c,d);
    if(x.szuk(a)==b)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    if(y.szuk(c)==d)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test2(zes a, zes b,int ro)
    {
    x.del(a);
    y.del(b);
    if(x.roz()==ro)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    if(y.roz()==ro)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test3(zes a, zes b, zes c, zes d)
    {
    x.change(a,b);
    y.change(c,d);
    if(x.szuk(a)==b)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    if(y.szuk(c)==d)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test4(zes a, zes b, zes wa, zes wb)
    {
    if(x.szuk(a)==wa)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }

    if(y.szuk(b)==wb)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test5(int w)
    {
    if(w==x.roz() && w==y.roz())
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test6(int w)
    {
    if(x.comp(&y)==w)
        {
        cout<<"wynik poprawny"<<endl;
        }
    else
        {
        cout<<"wynik bledny"<<endl;
        }
    }
void test7()
    {
    x.druk();
    cout<<endl;
    y.druk();
    }
};

int main()
{
cout<<"typ wbudowany"<<endl;
tst1 T;
T.test1(2,4,7,8);
T.test1(15,7,9,14);
T.test5(2);
T.test4(2,9,4,14);
T.test2(15,7,1);
T.test6(0);
T.test5(1);
T.test3(2,45,9,12);
T.test2(2,9,0);
T.test1(15,2,12,244);
T.test7();
cout<<"typ uzytkownika"<<endl;
tst2 Tw;
zes a(2,4),b(7,8),c(4,5),d(23,42);
Tw.test1(a,b,c,d);
zes e(5,8),f(12,41),g(512,823),h(542,855);

Tw.test1(e,f,g,h);
Tw.test5(2);
Tw.test4(a,c,b,d);
Tw.test2(a,g,1);
Tw.test6(0);
Tw.test5(1);
Tw.test3(e,d,c,h);
Tw.test2(e,c,0);
Tw.test7();
Tw.test1(b,g,h,e);
Tw.test7();
}
