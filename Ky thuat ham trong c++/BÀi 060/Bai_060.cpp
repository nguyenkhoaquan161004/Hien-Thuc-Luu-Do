#include<iostream>
using namespace std;
void Nhap(int&);
int Xuat(int&);
int main()
{
	int n;
	Nhap(n);
	cout << "Tich = " << Xuat(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
int Xuat(int& n)
{
	int s = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		s = s * dv;
		t = t / 10;
	}
	return s;
}