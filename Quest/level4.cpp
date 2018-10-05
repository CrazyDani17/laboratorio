#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double>distancias;
    double a;
    int ciudad_a;
    int ciudad_b;
    double suma=0;
    double sum=0;
    while(cin>>a && a!=-100){
        distancias.push_back(a);
    }
    for(int i=0; i<distancias.size(); i++){
        suma=suma+distancias[i];
    }
    cout<<"La distacia total es: "<<suma<<endl;
    sort(distancias.begin(),distancias.end());
    cout<<"La distancia menor es"<<distancias[0]<<endl
    <<"La distancias mayor es"<<distancias[distancias.size()-1]<<endl;
    cout<<"Ingresar ciudad a:"<<endl;
    cin>>ciudad_a;
    cout<<"Ingresar ciudad b:"<<endl;
    cin>>ciudad_b;
    for(int i=ciudad_a; i<ciudad_b; i++){
        sum=sum+distancias[i];
    }
    cout<<"La media entre las ciudades es: "<<sum/2<<endl;
    return 0;
}
