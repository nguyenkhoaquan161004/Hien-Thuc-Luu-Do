#include<iostream>
using namespace std;
void Nhap(int&);
int Xuat(int&);
int main()
{
	int n;
	Nhap(n);
	cout << "So chu so = " << Xuat(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
int Xuat(int& n)
{
	int s = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		s = s + 1;
		t = t / 10;
	}
	return s;
}