#include<iostream>
using namespace std;
void Nhap(int&);
float Xuat(int);
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
float Xuat(int n)
{
	float s = 0;
	int m = 0;
	for (int i = 1; i <= n; i ++)
	{
		m = m + i;
		s = s + (float)1 / m;
	}
	return s;
}