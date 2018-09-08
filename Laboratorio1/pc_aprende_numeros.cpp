#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"A que te digo que número es: "<<endl;
    cin>>n;
    if (n==0){
      cout << "Cero" << endl;
    }
    if(n==1){
        cout<<"Uno"<<endl;
    }
    if(n==2){
        cout<<"Dos"<<endl;
    }
    if(n==3){
        cout<<"tres"<<endl;
    }
    if(n==4){
        cout<<"cuatro"<<endl;
    }
    if(n<0||n>4){
        cout<<":v no es número que conosco"<<endl;
    }
    return 0;
}
