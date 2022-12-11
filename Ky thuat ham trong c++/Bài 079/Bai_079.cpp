#include <iostream>
using namespace std;
void Nhap(int&);
int Xuat(int);
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
int Xuat(int n)
{
	int s = 0;
	int d = 1;
	for (int i = 1; i <= n; i++)
	{
		d = d * i;
		s = s + d * i;
	}
	return s;
}