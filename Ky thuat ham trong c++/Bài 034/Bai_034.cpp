#include <iostream>
using namespace std;
float Tong(int);
int main()
{
    int n;
    cout << "n= ";
    cin >> n;

    cout << "Tong = " << Tong(n);
    return 0;
}
float Tong(int n)
{
    float s = 0;
    for (int i = 1; i <= n; i = i + 1)
        s = s + (float)(2*i+1)/(2*i+2);
    return s;
}
