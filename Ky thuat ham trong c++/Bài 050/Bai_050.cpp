#include<iostream>
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
	for  (int i = 1; i <= n; i++)
	{
		if(n%i==0)
			s = s + i;
	}
	return s;
}
