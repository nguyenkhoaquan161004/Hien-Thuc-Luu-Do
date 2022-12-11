#include<iostream>
using namespace std;
void Nhap(int&, int&);
int Xuat(int, int);
int main()
{
	int n, x;
	Nhap(n, x);
	cout << "Tong = " << Xuat(n, x);
	return 0;
}
void Nhap(int& n, int& x)
{
	cout << "n= ";
	cin >> n;
	cout << "x= ";
	cin >> x;
}
int Xuat(int n, int x)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + pow(i, x);
	}
	return s;
}