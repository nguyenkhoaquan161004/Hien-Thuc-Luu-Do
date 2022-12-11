#include<iostream>
using namespace std;
void Nhap(int&);
int Xuat(int);
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
int Xuat(int n)
{
	float s = 1;
	for (int i = 1; i <= n; i=i+2)
	{
		if (n % i == 0)
			s = s * i;
	}
	return s;
}
