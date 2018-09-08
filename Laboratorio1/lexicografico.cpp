#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first;
    string second
    cout << "Ingrese dos nombres" << endl;
    cin>> first >>second;
    if (first==second){
        cout<< "ambos son iguales";
    }
    if (first< second){
        cout<< first<<"está lexicográficamente antes de"<<second;
    }
    if (first> second){
        cout<< second<<"está lexicográficamente antes de"<<first;
    }
    return 0;
}
