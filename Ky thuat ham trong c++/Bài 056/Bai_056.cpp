#include<iostream>
using namespace std;
void Nhap(int&);
int Xuat(int);
int main()
{
	int n;
	Nhap(n);
	cout << "So uoc = " << Xuat(n);
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
	for (int i = 2; i <= n; i=i+2)
	{
		if (n % i == 0)
			s = s + 1;
	}
	return s;
}
