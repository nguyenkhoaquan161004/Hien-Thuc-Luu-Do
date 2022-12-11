#include<iostream>
using namespace std;
void Nhap(int&);
int Xuat(int);
int main()
{
	int n;
	Nhap(n);
	int s = Xuat(n);
	cout << "Tong = " << s;
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
	for (int i = 1; i <= n; i++)
		s = s + i * i * i;
	return s;
}