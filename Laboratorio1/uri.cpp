#include <iostream>

using namespace std;

int main()
{

    int b_cien, b_cincuenta, b_veinte, b_diez, b_cinco, b_dos, b_un, n;
    cin>>n;
    cout<<n<<endl;
    b_cien=n/100;n=n-(100*b_cien);
    b_cincuenta=n/50;n=n-(50*b_cincuenta);
    b_veinte=n/20;n=n-(20*b_veinte);
    b_diez=n/10;n=n-(10*b_diez);
    b_cinco=n/5;n=n-(5*b_cinco);
    b_dos=n/2;n=n-(2*b_dos);
    b_un=n/1;n=n-(1*b_un);
    cout<<b_cien<<" nota(s) de R$ 100,00"<<endl;
    cout<<b_cincuenta<<" nota(s) de R$ 50,00"<<endl;
    cout<<b_veinte<<" nota(s) de R$ 20,00"<<endl;
    cout<<b_diez<<" nota(s) de R$ 10,00"<<endl;
    cout<<b_cinco<<" nota(s) de R$ 5,00"<<endl;
    cout<<b_dos<<" nota(s) de R$ 2,00"<<endl;
    cout<<b_un<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
