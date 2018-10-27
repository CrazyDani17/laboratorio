#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string>conjunto;
    conjunto.push_back("hola");
    conjunto.push_back("gato");
    conjunto.push_back("michi");
    conjunto.push_back("dani");
    conjunto.push_back("c++");
    conjunto.push_back("gato");
    conjunto.push_back("python");
    conjunto.push_back("gato");
    string moda;
    int contador=0;
    int mayor=0;
    for(int i=0; i<conjunto.size();i++){
        for(int j=i; j<conjunto.size(); j++){
            if(conjunto[i]==conjunto[j]){
                contador++;
            }
        }
        if(contador>mayor){
            moda=conjunto[i];
            mayor=contador;
        }
        contador=0;
    }
    cout <<"La moda es: "<< moda << endl;
    return 0;
}
