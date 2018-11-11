#include <iostream>
#include <vector>

using namespace std;

class Cafe{
    double pre; string c; string pst; int w;
public:
    Cafe(double pre, string c, string pst, int w);
    void add(vector<double>& precios, vector <string>& cafes, vector <string>& postres){
        precios.push_back(pre);
        cafes.push_back(c);
        postres.push_back(pst);
    }
    int mostrarwifi(){return w;}
};
Cafe::Cafe(double pre, string c, string pst, int w):pre(pre),c(c),pst(pst),w(w){}
int main()
{
    vector<double> precios;
    vector<string> cafes;
    vector<string> postres;
    Cafe pedido(19.50,"Capuccino","Torta de harina",12345678);
    pedido.add(precios, cafes, postres);
    for(int i=0;i<precios.size();i++){
        cout<<precios[i]<<endl;
    }
    for(int i=0;i<cafes.size();i++){
        cout<<cafes[i]<<endl;
    }
    for(int i=0;i<postres.size();i++){
        cout<<postres[i]<<endl;
    }
    cout << pedido.mostrarwifi() << endl;
    return 0;
}
