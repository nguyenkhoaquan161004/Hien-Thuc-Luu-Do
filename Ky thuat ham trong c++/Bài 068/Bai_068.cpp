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
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		s = s + t;
	}
	return s;
}