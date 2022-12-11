#include <iostream>
using namespace std;
float Tich(int);
int main()
{
    int n;
    cout << "n= ";
    cin >> n;
    cout << "T= " << Tich(n);
    return 0;
}
float Tich(int n)
{
    float t = 1;
    for(int i=1;i<=n;i=i+1)
        t = t * (1 + (float)1 / (i * i));
    return t;
}