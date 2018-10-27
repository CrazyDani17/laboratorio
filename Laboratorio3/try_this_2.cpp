#include <iostream>

using namespace std;

int main()
{
    int contador=0;
    for(int i=1;i<=100;i++){
        for(int j=1; j<=i; j++){
            if(i%j==0){
                contador++;
            }
        }
        if(contador<=2){
            cout<<i<<endl;
        }
        contador=0;
    }
    return 0;
}
