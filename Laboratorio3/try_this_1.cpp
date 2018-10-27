#include <iostream>
#include <vector>
using namespace std;

int main()
try
{
    int rpta;
    vector<int>opciones;
    opciones.push_back(1);
    opciones.push_back(3);
    opciones.push_back(1);
    opciones.push_back(2);
    opciones.push_back(3);
    for(int i=0; i<opciones.size();i++){
        cout<<"Ingrese en numeros cualquiera de las siguientes opciones: "<<endl;
        cout<<"1.Piedra"<<endl;
        cout<<"2.Papel"<<endl;
        cout<<"3.Tijeras"<<endl;
        cin>>rpta;
            switch(rpta){
                case 1:
                    switch(opciones[i]){
                        case 1:
                            cout<<"Empate"<<endl;
                            break;
                        case 2:
                            cout<<"Perdio"<<endl;
                            break;
                        default:
                            cout<<"gano"<<endl;
                            break;
                    }
                    break;
                case 2:
                    switch(opciones[i]){
                    case 1:
                        cout<<"gano"<<endl;
                        break;
                    case 2:
                        cout<<"empate"<<endl;
                        break;
                    default:
                        cout<<"perdio"<<endl;
                        break;
                    }
                    break;
                case 3:
                    switch(opciones[i]){
                    case 1:
                        cout<<"perdio"<<endl;
                        break;
                    case 2:
                        cout<<"gano"<<endl;
                        break;
                    default:
                        cout<<"empate"<<endl;
                        break;
                    }
                    break;
                default:
                    throw runtime_error("opcion no valida");
                    break;
            }
            }
    return 0;
    }
    catch(exception & e){
        cerr<<"Error: "<<e.what()<<endl;
        return 1;
    }
