#include <iostream>

using namespace std;

int main()
{

    char c='a';
    for(int i=1; i<27; i++){
        char z=c;
        int n=z;
        cout<<c<<"..."<<n<<endl;
        c++;
    }
    char m='A';
    for(int i=65; i<91; i++){
        char z=m;
        int n=z;
        cout<<m<<"..."<<n<<endl;
        m++;
    }
    char d='0';
    for(int i=0; i<10; i++){
        char z=d;
        int n=z;
        cout<<d<<"..."<<n<<endl;
        d++;
    }
    return 0;
}
