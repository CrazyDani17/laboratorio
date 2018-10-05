#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n=100;
    int m=100;
    int na;
    string respuesta="no";
    cout<<"Piensa en un numero del 1 al 100"<<endl;
    for(int i=0; i<7; i++){
        if(respuesta=="no"){
            if(m!=3){
                m=m/2;
            }
            else if(m==3){
                m=2;
            }
            else{
                m=1;
            }
            n=n-m;
        }
        else{
            if(m!=3){
                m=m/2;
            }
            else if(m==3){
                m=2;
            }
            else{
                m=1;
            }
            n=n+m;

        }
        if(i!=6){
            cout << "¿El numero es mayor a "<<n<< "?" << endl;
            cin>>respuesta;
        }
    }
    cout<<"Tu numero es impar?"<<endl;
    cin>>respuesta;
    if(respuesta!="si"){
        n=n+1;
    }
    cout<<"Tu numero es: "<<n;
    return 0;
}
