#include <iostream>

using namespace std;

int main()
{
    double x;
    double y;
    char op;
    double respuesta;
    cout<<"Ingrese dos digitos y su operación respectiva:"<<endl;
	cin>>x>>y>>op;
	switch(op){
        case '/':
            respuesta=x/y;
            cout <<"La respuesta es: "<<respuesta<<endl;
            break;
        case '*':
            respuesta=x*y;
            cout <<"La respuesta es: "<<respuesta<<endl;
            break;
        case '+':
            respuesta=x+y;
            cout <<"La respuesta es: "<<respuesta<<endl;
            break;
        case '-':
            respuesta=x-y;
            cout <<"La respuesta es: "<<respuesta<<endl;
            break;
        default:
            cout<<"Lo siento, no conosco ese operador '"<<op<<"'"<<endl;
            break;

    }
    return 0;
}
