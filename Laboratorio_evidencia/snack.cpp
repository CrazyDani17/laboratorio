#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int x,y;
	double total;
	cin>>x>>y;
	if(x==1){
        total=4*y;
	}
	if(x==2){
        total=4.5*y;
	}
	if(x==3){
        total=5*y;
	}
	if(x==4){
        total=2*y;
	}
	if(x==5){
        total=1.5*y;
	}
	printf("Total: R$ %.2f\n",total);
	return 0;
}
