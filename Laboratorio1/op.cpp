#include <iostream>
#include <string>
using namespace std;

int main()
{
    string op;
    int n1;
    int n2;
    cin>>op>>n1>>n2;
    if(op=="+"){
        cout<<n1+n2<<endl;
    }
    if(op=="-"){
        cout<<n1-n2<<endl;
    }
    if(op=="/"){
        cout<<n1/n2<<endl;
    }
    if(op=="*"){
        cout<<n1*n2<<endl;
    }
    return 0;
}
