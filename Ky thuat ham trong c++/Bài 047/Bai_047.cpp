#include <iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
float Xuat(float);
int main()
{
	int n;
	Nhap(n);
	cout << "Tong = " << Xuat(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
float Xuat(float n)
{
	float s = 0;
	for (int i = 1; i <= n; i++)
		s = s + (float)sqrt(1 + (float)1 / (i * i) + (float)1 / (i + 1) * (i + 1));
	return s;
}