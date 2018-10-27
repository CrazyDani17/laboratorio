#include <iostream>
#include <vector>
using namespace std;

int main()
try
{
    vector<string>nombres;
    string name;
    int n;
    while(cin>>name>>n){
        if(name!="SinNombre" && n!=0){
            if(nombres.size()==0){
                nombres.push_back(name);
            }
            else{
                for(int i=0; i<nombres.size();i++){
                    if(name==nombres[i]){
                        throw runtime_error("repetiste el nombre");
                    }
                }
                nombres.push_back(name);
            }
        }
        else{
            return 0;
        }
    }
}
catch(exception & e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}
