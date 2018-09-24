#include <iostream>

using namespace std;

int main()
{

    cout <<"Ingrese el monto seguido de la moneda que desee convertir:"
        <<endl<<"<y> yenes"
        <<endl<<"<e> euros"
        <<endl<<"<l> libras"
        <<endl<<"<d> dolares"<<endl;
    double total;
    double monto;
    char moneda;
    char op;
    cin>> monto>> moneda;
    if(moneda=='d'){
        cout<<"Ingrese al tipo de moneda que desea convertir: "<<endl
        <<"<y> si son yenes"<<endl
        <<"<e> si son euros"<<endl
        <<"<l> si son libras"<<endl;
        cin>>op;
        if(op=='l'){
            total=monto*0.76;
            cout<< monto <<" dolares en libras son "<<total;
        }
        else if(op=='y'){
            total=monto*112.57;
            cout<<monto<<" dolares en yenes son "<<total;
        }
        else if(op=='e'){
            total=monto*0.85;
            cout<<monto<<" dolares en euros son  "<<total;
        }
        else{
            cout<<"Ingrese opcion valida";
        }
    }
    else if(moneda=='l'){
            total=monto*1.31;
            cout<<monto<<" libras son en dolares "<<total;
        }
    else if(moneda=='y'){
            total=monto*0.0089;
            cout<< monto <<" yenes son en dolares "<<total;
        }
    else if(moneda=='e'){
            total=monto*1.18;
            cout<< monto <<" euros son en dolares "<<total;
        }
    else {
            cout<<"No conozco esa moneda";
    }
    return 0;
}
