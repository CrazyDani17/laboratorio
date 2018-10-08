#include <iostream>
#include <string>
using namespace std;
int main() {
	unsigned long long x=1;
	int i=1;
	int y=1;
	while(i<65){
		cout<<"cuadrado nro"<<i<<'\t'<<x<<"arroz"<<endl;
		if(x>=1000 && x<=1000000 && y==1){
			cout<<"En el cuadrado "<<i<<" ya llego a 1000"<<endl;
			y=2;			
		}
		if(x>=1000000 && x<=1000000000 && y==2){
			cout<<"En el cuadrado "<<i<<" ya llego a 10^6"<<endl;
			y=3;		
		}
		if(x>=1000000000 && y==3){
			cout<<"En el cuadrado "<<i<<" ya llego a 10^9"<<endl;
			y=4;
		}
		x=x*2;
		i++;
	}
	
	return 0;
}
