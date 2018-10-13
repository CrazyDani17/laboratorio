#include <iostream>

using namespace std;

int area(int length, int width);

int main()
{
    int x0=area(7,8);
    int x1=area(7,8);
    int x2=area(7,2);
    return area(4,4);
}

int area(int length, int width)
{
    return length*width;
}
