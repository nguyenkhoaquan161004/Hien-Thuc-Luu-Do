#include <iostream>
using namespace std;
void Nhap(int&, float&);
float Xuat(int, float);
int main()
{
	int n;
	float x;
	Nhap(n, x);
	cout << "Tong = " << Xuat(n, x);
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
	float s = 1 + x;
	float t = x;
	int m = 1;
	for (int i = 3; i <= 2 * n + 1; i = i + 2)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)t / m;
	}
	return s;
}