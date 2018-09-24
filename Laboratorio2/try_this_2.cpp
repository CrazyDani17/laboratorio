#include <iostream>

using namespace std;

int main()
{
    cout <<"Ingrese el monto seguido de la moneda que desee convertir:"
        <<endl<<"<y> yenes"
        <<endl<<"<e> euros"
        <<endl<<"<l> libras"
        <<endl<<"<d> dolares"
        <<endl<<"<u> Yuan"<<endl;
    double total;
    double monto;
    char moneda;
    char op;
    cin>>monto>>moneda;
    switch (moneda){
    case 'd':
        cout<<"Ingrese al tipo de moneda que desea convertir: "<<endl
        <<"<y> si son yenes"<<endl
        <<"<e> si son euros"<<endl
        <<"<l> si son libras"<<endl;
        cin>>op;
        switch (op){
            case'l':
                total=monto*0.76;
                cout<< monto <<" dolares en libras son "<<total;
                break;
            case 'y':
                total=monto*112.57;
                cout<<monto<<" dolares en yenes son "<<total;
                break;
            case 'e':
                total=monto*0.85;
                cout<<monto<<" dolares en euros son  "<<total;
                break;
            default:
                cout<<"Ingrese opcion valida";
                break;
        }
    break;
    case 'l':
        total=monto*1.31;
        cout<<monto<<" libras son en dolares "<<total;
        break;
    case 'y':
        total=monto*0.0089;
        cout<< monto <<" yenes son en dolares "<<total;
        break;
    case 'e':
        total=monto*1.18;
        cout<< monto <<" euros son en dolares "<<total;
        break;
    case 'u':
        total=monto*0.52;
        cout<<monto << "yuans son en shekels "<<total;
        break;
    default:
        cout <<"no conozco esa moneda";
        break;
    }
    return 0;
}
