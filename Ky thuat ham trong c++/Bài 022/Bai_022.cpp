#include<iostream>
using namespace std;
void Nhap(int&);
int Xuat(int);
int main()
{
	int n;
	Nhap(n);
	int dv = Xuat(n);
	cout << "Don vi la " << dv;
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
int Xuat(int n)
{
	return n % 10;
}
