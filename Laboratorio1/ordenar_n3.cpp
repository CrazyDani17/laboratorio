#include <iostream>

using namespace std;

int main()
{
    int hola [3];
    cin>>hola[0]>>hola[1]>>hola[2];
    int mayor;
    if(hola[2]<hola[0]){
        mayor=hola[0];
        hola[0]=hola[2];
        hola[2]=mayor;
    }
    if(hola[1]<hola[0]){
        mayor=hola[0];
        hola[0]=hola[1];
        hola[1]=mayor;
    }
    if(hola[2]<hola[1]){
        mayor=hola[1];
        hola[1]=hola[2];
        hola[2]=mayor;
    }
    cout<<hola[0]<<hola[1]<<hola[2]<<endl;
    return 0;
}
