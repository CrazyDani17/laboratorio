#include <iostream>
#include <vector>

using namespace std;

class Cafe{
    double pre; string c; string pst; int w;
public:
    enum Coffes{
        americano=1,latte,cappucino,macchiato,glace,frappe,expresso,mocha
    };
    Cafe();
    Cafe(double pre, string c, string pst, int w);
    void add(vector<double>& precios, vector <string>& cafes, vector <string>& postres){
        if(pre<0){
        throw runtime_error("Valor negativo");
        }
        precios.push_back(pre);
        cafes.push_back(c);
        postres.push_back(pst);
    }
    double mostrarprecio()const{return pre;}
    string mostrarcafe()const{return c;}
    string mostrarpostre()const{return pst;}
    int mostrarwifi()const{return w;}
};
ostream& operator <<(ostream& os, Cafe::Coffes c)
{
    static const char* coffe_tbl[8]={
            "americano","latte","cappucino","macchiato","glace","frappe","expresso","mocha"
    };
    return os<<coffe_tbl[c-1];
}

const Cafe& default_cafe()
{
    static const Cafe pedido(19.5,"cappucino","torta de harina",12345678);
    return pedido;
}


Cafe::Cafe():pre(default_cafe().mostrarprecio()),c(default_cafe().mostrarcafe()),pst(default_cafe().mostrarpostre()),w(default_cafe().mostrarwifi()){}

Cafe::Cafe(double pre, string c, string pst, int w):pre(pre),c(c),pst(pst),w(w){}
int main()
try
{
    vector<double> precios;
    vector<string> cafes;
    vector<string> postres;
    string op;
    double pre;
    string c;
    string pst;
    int w;
    /*cout<<"Administrador o cliente?"<<endl;
    cin>>op;
    if(op=="administrador"){
       cout<<"Ingresar precio del producto"<<endl;
       cin>>pre;
       cout<<"Ingresar nombre del producto"<<endl;
       cin>>c;
       Cafe add_producto(pre,c);
    }
    if(op=="cliente"){
        cout<<"Ingresar lo que desea:"
        cin>>c;
        Cafe pedido(c);
    }*/
    Cafe pedido(-19.50,"Capuccino","Torta de harina",12345678);
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
catch(exception& e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}

