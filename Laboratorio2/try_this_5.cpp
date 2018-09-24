#include <iostream>

using namespace std;

int square(int x)
{
    int total=0;
    for (int i=0; i<x;i++){
        total=x+total;
    }
    return total;
}

int main()
{
    cout << square(6) << endl;
    return 0;
}
