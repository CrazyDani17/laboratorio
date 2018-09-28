#include<iostream>
using namespace std;
int main(){
	int n, years,meses,dias;
	cin>>n;
	years=n/365;n=n-(years*365);
	meses=n/30;n=n-(meses*30);
	dias=n;
	cout<<years<<" ano(s)"<<endl;
	cout<<meses<<" mes(es)"<<endl;
	cout<<dias<<" dia(s)"<<endl;
	return 0;
}

