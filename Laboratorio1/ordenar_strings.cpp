#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    string b;
    string c;
    cin>>a>>b>>c;
    string mayor;
    if(c<a){
        mayor=a;
        a=c;
        c=mayor;
    }
    if(b<a){
        mayor=a;
        a=b;
        b=mayor;
    }
    if(c<b){
        mayor=b;
        b=c;
        c=mayor;
    }
    cout<<a<<b<<c<<endl;
    return 0;
}
