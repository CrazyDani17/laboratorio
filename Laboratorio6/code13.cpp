#include <iostream>

using namespace std;

int main()
{
    void* pv1= new int;
    void* pv2= new double[10];
}
void f(void* pv)
{
    void* pv2=pv;
    int* pi=static_cast<int*>(pv);
}
int incr_v(int x){return x+1;}
void incr_p(int* p){++*p;}
void incr_r(int& r){ ++r;}

inline void error (const string& s)
{throw runtime_error(s);}

void incr_p(char* p)
{
    if(p==0)error("puntero nulo");
    ++*p;
}

int main()
try
{
    {
        int x=2;
        x=incr_v(x);
    }
    {
        int x=7;
        incr_p(&x);
        incr_r(x);}
    {
        char* p=0;
        incr_p(p);

    }
}
catch(exception& e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}
