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
    for (int i = 2; i <= 2*n; i = i + 2)
        s = s + (float)1 / i;
    return s;
}
