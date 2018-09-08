#include <iostream>
#include <string>
using namespace std;

int main()
{
    int first;
    int second;
    cout<<"Ingresar dos numeros enteros:"<<endl;
    cin>>first>>second;
    cout<<"La suma es:"<<first+second<<endl;
    cout<<"La resta del primero por el segundo es:"<<first-second<<endl;
    cout<<"La división del primero entre el segundo es:"<<first/second<<endl;
    cout<<"El producto es:"<<first*second<<endl;
    if (first==second){
        cout<<"Son igualitos"<<endl;
    }
    if (first<second){
        cout<<"El segundo es mayor"<<endl;
    }
    if(first>second){
        cout<<"El primero es mayor"<<endl;
    }
    return 0;
}
