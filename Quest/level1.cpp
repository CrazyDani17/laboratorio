#include <iostream>

using namespace std;

int main()
{
    double a;
    double b;
    while(cin>>a>>b){
            if(a!='#'||b!='#'){
                cout<<a<<'\t'<<b<<endl;
                if(a<b){
                    cout<<a<<" es el mínimo"<<endl;
                    cout<<b<<" es el máximo"<<endl;
                    if(b-a<=1.0/100){
                    cout<<"son casi iguales"<<endl;
                }
                }
                else if(b<a){
                    cout<<b<<" es el mínimo"<<endl;
                    cout<<a<<" es el máximo"<<endl;
                    if(a-b<=(1.0/100)){
                    cout<<"son casi iguales"<<endl;
                    }
                }
                else{
                    cout<<"son iguales"<<endl;
                }
            }
            else{
                return 0;
                }

    }

}
