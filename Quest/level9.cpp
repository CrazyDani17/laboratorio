#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int contador=0;
    int n;
    vector<int>primos;
    cout<<"Ingrese el numero:"<<endl;
    cin>>n;
    for(int j=1; j<=n; j++){
        for(int i=1; i<=j; i++){
            if(j%i==0){
                contador++;
            }
        }
        if(contador<=2){
            primos.push_back(j);
        }
        contador=0;
    }
    for(int x=0; x<primos.size(); x++){
        cout<<primos[x]<<endl;
    }
    return 0;
}
