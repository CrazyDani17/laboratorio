#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <string> no_gusta;
    vector <string> texto;
    no_gusta.push_back("shit");
    no_gusta.push_back("fuck");
    no_gusta.push_back("bitch");
    string palabra="";
    while(palabra!="#"){
        cout<<"Ingrese un texto, si ya no desea continuar escriba # y le da enter"<<endl;
        cin>>palabra;
        if(palabra!="#"){
            texto.push_back(palabra);
        }
    }
    for(int i=0; i<no_gusta.size();i++){
    for(int j=0; j<texto.size();j++){
        if(no_gusta[i]==texto[j]){
            cout << "Piii" << '\t';
        }
        else{
            cout<< texto[j]<< '\t';
        }
    }
    }
    return 0;
}
