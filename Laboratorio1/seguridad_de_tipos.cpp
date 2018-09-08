#include <iostream>
#include <string>
using namespace std;

int main()
{
    int first;
    int second;
    double firstd;
    double secondd;
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
    cout<<"Ingresar dos numeros decimales o enteros:"<<endl;
    cin>>firstd>>secondd;
    cout<<"La suma es:"<<firstd+secondd<<endl;
    cout<<"La resta del primero por el segundo es:"<<firstd-secondd<<endl;
    cout<<"La división del primero entre el segundo es:"<<firstd/secondd<<endl;
    cout<<"El producto es:"<<firstd*secondd<<endl;
    if (firstd==secondd){
        cout<<"Son igualitos"<<endl;
    }
    if (firstd<secondd){
        cout<<"El segundo es mayor"<<endl;
    }
    if(firstd>secondd){
        cout<<"El primero es mayor"<<endl;
    }
    return 0;
}
