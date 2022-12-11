#include<iostream>
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
	cin >> n;
}
float Xuat(int n, float x)
{
	float s = 0;
	float t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * x;
		s = s + t;
	}
	return s;
}