#include<iostream>
using namespace std;
void Nhap(int& , float& );
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
	float s = 0;
	float t = 1;
	int m = 0;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		m = m + i;
		s = s + (float)t / m;
	}
	return s;
}