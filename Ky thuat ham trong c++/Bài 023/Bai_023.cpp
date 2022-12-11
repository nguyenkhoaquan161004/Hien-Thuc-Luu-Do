#include<iostream>
using namespace std;
void Nhap(int&);
int Xuat(int);
int main()
{
	int n;
	Nhap(n);
	int hc = Xuat(n);
	cout << "Don chuc la " << hc;
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
int Xuat(int n)
{
	return (n / 10) % 10;
}
