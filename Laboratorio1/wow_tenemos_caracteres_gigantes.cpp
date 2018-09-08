#include <iostream>

using namespace std;

int main()
{
    unsigned int a=255;
    unsigned char c=a;
    unsigned int b=c;
    if(a==b){
        cout<<"wow tenemos caracteres gigantes"<<endl;
    }
    else cout <<a<<" es difente de "<<b<<endl;
    return 0;
}
