#include <iostream>

using namespace std;

int area(int length, int width);

int main()
{
    int s1=area(7,1);
    int s2=area(7,6);
    int s3=area(7,9);
    int s4=area(7,4);
    return area(4,4);
}

int area(int length, int width)
{
    return length*width;
}
