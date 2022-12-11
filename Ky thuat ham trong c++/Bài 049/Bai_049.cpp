#include<iostream>
using namespace std;
void Nhap(int&);
void Xuat(int);
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
void Xuat(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i << " ";
	}
}