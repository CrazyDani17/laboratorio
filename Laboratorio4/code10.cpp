#include <iostream>

using namespace std;

struct X
{
    void f (int x)
    {
        struct Y
        {
            int f(){
                return 1;
            }
        };
        int m;
        m=x;
        Y m2;
        return f(m2.f());
    }
    int m;
    void g(int m)
    {
        if(m){
            f(m+2);
        }
        else{
            g(m+2);
        }
    }
    X(){}
    void m3(){}
    void main()
    {
        X a; a.f(2);
    }
};

int main()
{
    g(0);
    f();
    f1(0,1); X x; x.main(); x.m3();
    return 0;
}
