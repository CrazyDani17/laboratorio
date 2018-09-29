#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double>metros;
    double a;
    double menor;
    double mayor;
    string b;
    string unidad_mayor;
    string unidad_menor;
    int c=1;
    double v=0;
    double vmenor=0;
    double vmayor=0;
    double suma=0;
    double m=0;
    while(cin>>a>>b){
           if(b=="m" || b=="in" || b=="ft" || b=="cm"){
            if(a!='#'){
                if(b=="m"){
                        v=a*100;
                    }
                else if(b=="in"){
                        v=a*2.54;
                    }
                else if(b=="ft"){
                        v=a*30.48;
                    }
                else if(b=="cm"){
                        v=a;
                    }
                if(c==1){
                    menor=a;
                    mayor=a;
                    vmenor=v;
                    vmayor=v;
                    unidad_menor=b;
                    unidad_mayor=b;
                    cout<<menor<<unidad_menor<<" es el menor hasta ahora"<<endl;
                    cout<<mayor<<unidad_mayor<<" es el mayor hasta ahora"<<endl;
                    c++;
                }
                else{
                    if(v<vmenor){
                        menor=a;
                        vmenor=v;
                        unidad_menor=b;
                        cout<<menor<<unidad_menor<<" es el menor hasta ahora"<<endl;
                        cout<<mayor<<unidad_mayor<<" es el mayor hasta ahora"<<endl;
                    }
                    if(v>mayor){
                        mayor=a;
                        vmayor=v;
                        unidad_mayor=b;
                        cout<<menor<<unidad_menor<<" es el menor hasta ahora"<<endl;
                        cout<<mayor<<unidad_mayor<<" es el mayor hasta ahora"<<endl;
                    }
                }
                if(b=="m"){
                        m=a;
                    }
                else if(b=="in"){
                        m=a*0.0254;
                    }
                else if(b=="ft"){
                        m=a*0.3048;
                    }
                else if(b=="cm"){
                        m=a*0.01;
                    }
                    metros.push_back(m);
                    sort(metros.begin(),metros.end());
                    for(int i=0;i<metros.size(); ++i)
                    {
                        cout<<metros[i]<<'\t';
                    }
                    cout<<""<<endl;
                    suma=suma+m;
                    cout<<"La suma es "<<suma<<" en metros"<<endl;
            }
            else{
                return 0;
            }
           }
         else{
            cout<<"No conozco esa unidad"<<endl;
         }
    }
}
