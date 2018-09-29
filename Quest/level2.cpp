#include <iostream>

using namespace std;

int main()
{
    double a;
    double menor;
    double mayor;
    string b;
    string unidad_mayor;
    string unidad_menor;
    int c=1;
    while(cin>>a>>b){
            if(a!='#'){
                if(c==1){
                    menor=a;
                    mayor=a;
                    cout<<menor<<b<<" es el menor hasta ahora"<<endl;
                    cout<<mayor<<b<<" es el mayor hasta ahora"<<endl;
                    c++;
                }
                else{
                    if(a<menor){
                        mayor=menor;
                        menor=a;
                        cout<<menor<<" es el menor hasta ahora"<<endl;
                    }
                    if(a>mayor){
                        menor=mayor;
                        mayor=a;
                        cout<<mayor<<" es el mayor hasta ahora"<<endl;
                    }
                }
            }
            else{
                return 0;
            }
    }
}
