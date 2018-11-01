#include <iostream>
#include <vector>
using namespace std;

vector <int> volteo(vector<int>& v1)
{
    vector<int>v2;
    int j=v1.size()-1;
    for(int i=0;i<v1.size();i++){
        v2.push_back(v1[j]);
        j--;
    }
    return v2;
}

void inverso(vector<int>& v1)
{
    int d;
    int j=v1.size()-1;
    for(int i=0;i<v1.size()/2;i++){
        d=v1[i];
        v1[i]=v1[j];
        v1[j]=d;
        j--;
    }
}

int main(void)
{
    vector<int>vectorcito;
    vectorcito.push_back(1);
    vectorcito.push_back(3);
    vectorcito.push_back(4);
    vectorcito.push_back(5);
    vectorcito.push_back(6);
    vectorcito.push_back(8);
    vectorcito.push_back(7);
    vector<int>otrovectorcito=volteo(vectorcito);
    for(int i=0;i<vectorcito.size();i++){
        cout<<otrovectorcito[i];
    }
    cout<<endl;
    inverso(vectorcito);
    for(int i=0;i<vectorcito.size();i++){
        cout<<vectorcito[i];
    }
    return 0;
}
