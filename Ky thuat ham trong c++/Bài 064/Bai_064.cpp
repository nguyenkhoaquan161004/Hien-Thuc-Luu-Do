#include <iostream>
using namespace std;
void Nhap(int&);
int Xuat(int);
int main()
{
	int n;
	Nhap(n);
	cout << "So lon nhat = " << Xuat(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
int Xuat(int n)
{
	int i = abs(n);
	int lc = 1 % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}