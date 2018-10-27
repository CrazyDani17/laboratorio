#include <iostream>
#include <math.h>
using namespace std;

int main()
try
{
    double a;
    double b;
    double c;
    double diferencial;
    double rpta1;
    double rpta2;
    cout << "Ingrese a:" << endl;
    cin>>a;
    cout << "Ingrese b:" << endl;
    cin>>b;
    cout << "Ingrese c:" << endl;
    cin>>c;
    diferencial=(b*b)-(4*a*c);
    if(diferencial<0){
        throw runtime_error("Respuesta imaginaria");
    }
    rpta1=(-b+sqrt(diferencial))/(2*a);
    rpta2=(-b-sqrt(diferencial))/(2*a);
    cout<<"Tus respuestas son: "<<rpta1<<" y "<<rpta2;
    return 0;
}
catch(exception & e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}
