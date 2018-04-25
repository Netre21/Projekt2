#include<stdlib.h>
#include<iostream>

using namespace std;

class zes
{
public:
int a;
int b;
zes(int x=0,int y=0)
    {
    a=x;
    b=y;
    }
int operator==(zes &p)
    {
    if(a==p.a && b==p.b)
        {
        return 1;
        }
    return 0;
    }
zes& operator=(zes const&p)
        {
        a=p.a;
        b=p.b;
        }
int operator!=(zes &p)
    {
    if(a!=p.a || b!=p.b)
        {
        return 1;
        }
    return 0;
    }
friend istream& operator>>(istream& in, zes& p)
    {
    in>>p.a>>p.b;
    return in;
    }
friend ostream& operator<<(ostream& out, zes& p)
    {
    out<<p.a<<"+"<<p.b<<"i";
    }

};

template <typename T, typename K>
class slownik
{
struct dic
    {
    K klucz;
    T wart;
    dic* nast;
    };
dic* A;
public:

slownik()
    {
    A=NULL;
    }
~slownik()
    {
    dic *akt=A;
    dic *temp=A;
    if(A==NULL)
        {
        delete A;
        }
    else
        {
        while(akt->nast!=NULL)
            {
            akt=akt->nast;
            delete temp;
            temp=akt;
            }
        delete akt;
        }
    }
void add(K a,T b)
    {
    dic *akt=A;
    if(A==NULL)
        {
        A=new dic;
        A->klucz=a;
        A->wart=b;
        A->nast=NULL;
        return;
        }
    if(akt->klucz==a && A!=NULL)
        {
        cout<<"klucz sie powtorzyl"<<endl;
        return;
        }
    while(akt->nast!=NULL)
        {
        akt=akt->nast;
        if(akt->klucz==a)
            {
            cout<<"klucz sie powtorzyl"<<endl;
            return;
            }

        }
    akt->nast=new dic;
    akt=akt->nast;
    akt->klucz=a;
    akt->wart=b;
    akt->nast=NULL;
    }
void del(K a)
    {
    dic *akt=A;
    dic *temp=A;
    if(A==NULL)
        {
        cout<<"brak elementow do usuniecia"<<endl;
        return;
        }
    if(A->klucz==a)
        {
        A=akt->nast;
        delete akt;
        return;
        }
    while(akt->klucz!=a)
        {
        temp=akt;
        if(akt->nast==NULL)
            {
            cout<<"nie ma takiego elementu."<<endl;
            return;
            }
        akt=akt->nast;
        }


    if(akt->nast==NULL)
        {
        temp->nast=NULL;
        }
    else
        {
        temp->nast=akt->nast;
        }
    delete akt;
    }
void change(K a, T b)
    {
    dic *akt=A;
    if(A==NULL)
        {
        cout<<"nie ma takiego elementu"<<endl;
        return;
        }
    while(akt->klucz!=a)
        {
        if(akt->nast==NULL)
            {
            cout<<"nie ma takiego elementu."<<endl;
            return;
            }
        akt=akt->nast;
        }
    akt->wart=b;
    }
T szuk(K a)
    {
    dic *akt=A;
    if(A==NULL)
        {
        cout<<"slownik jest pusty"<<endl;
        return NULL;
        }
    while(akt->klucz!=a)
        {
        if(akt->nast==NULL)
            {
            cout<<"nie ma takiego elementu."<<endl;
            return NULL;
            }
        akt=akt->nast;
        }
    return akt->wart;
    }
int roz()
    {
    dic *akt=A;
    int iter=1;
    if(A==NULL)
        {
        iter=iter-1;
        return iter;
        }
    while(akt->nast!=NULL)
        {
        iter=iter+1;
        akt=akt->nast;
        }
    return iter;
    }
void druk()
    {
    dic *akt=A;
    if(A==NULL)
       {
        cout<<"slownik jest pusty"<<endl;
        return;
       }
    while(akt->nast!=NULL)
        {
        cout<<akt->klucz<<" "<<akt->wart<<endl;
        akt=akt->nast;
        }
    cout<<akt->klucz<<" "<<akt->wart<<endl;
    }
int comp(slownik* B)
    {
    dic *aktA=A;
    dic *aktB=B->A;
    if(A==NULL || B->A==NULL)
        {
        if(A==B->A)
            {
            return 1;
            }
        return 0;
        }
    if(aktA->klucz!=aktB->klucz)
            {
            return 0;
            }
        if(aktA->wart!=aktB->wart)
            {
            return 0;
            }
    while(aktA->nast!=NULL && aktB->nast!=NULL)
        {
        if(aktA->klucz!=aktB->klucz)
            {
            return 0;
            }
        if(aktA->wart!=aktB->wart)
            {
            return 0;
            }
        aktA=aktA->nast;
        aktB=aktB->nast;
        }
    if(aktA->nast!=aktB->nast)
        {
        return 0;
        }
    return 1;
    }
};



