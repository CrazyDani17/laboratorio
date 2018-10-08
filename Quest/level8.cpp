#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
	vector<string>letras;
	letras.push_back("cero");
	letras.push_back("uno");
	letras.push_back("dos");
	letras.push_back("tres");
	letras.push_back("cuatro");
	letras.push_back("cinco");
	letras.push_back("seis");
	letras.push_back("siete");
	letras.push_back("ocho");
	letras.push_back("nueve");
	string a;
	string b;
	double x;
	double y;
	char op;
	cout<<"Bienvenido a la calculadora con letras:"<<endl<<"Ingrese dos digitos(en letras) y su operación respectiva:"<<endl;
	cin>>a>>b>>op;
	for(int i=0; i<10; i++){
		if(letras[i]==a){
            x=i;
		}
	}
	for(int j=0; j<10; j++){
		if(letras[j]==b){
            y=j;
		}
	}
	switch(op){
        case '/':
            cout <<"La respuesta es: "<<x/y<<endl;
            break;
        case '*':
            cout <<"La respuesta es: "<<x*y<<endl;
            break;
        case '+':
            cout <<"La respuesta es: "<<x+y<<endl;
            break;
        case '-':
            cout <<"La respuesta es: "<<x-y<<endl;
            break;
        default:
            cout<<"Lo siento, no conosco ese operador '"<<op<<"'"<<endl;
            break;

    }
	return 0;
}
