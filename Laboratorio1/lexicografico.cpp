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
        cout<< first<<"est� lexicogr�ficamente antes de"<<second;
    }
    if (first> second){
        cout<< second<<"est� lexicogr�ficamente antes de"<<first;
    }
    return 0;
}
