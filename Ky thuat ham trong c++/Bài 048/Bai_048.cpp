#include<iostream>
#include <cmath>
using namespace std;
void Nhap(int&, float&);
float Xuat(int, float);
int main()
{
	int n;
	float x;
	Nhap(n, x);
	cout << "Tich = " << Xuat(n, x);
	return 0;
}
void Nhap(int& n, float& x)
{
	cout << "n= ";
	cin >> n;
	cout << "x= ";
	cin >> x;
}
float Xuat(int n, float x)
{
	float s = x;
	for (int i = 1; i <= n; i++)
		s = s * (float)(x + i);
	return s;
}