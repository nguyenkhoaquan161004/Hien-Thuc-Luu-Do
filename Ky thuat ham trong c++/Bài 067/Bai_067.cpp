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
	int flag = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag == 1;
	}
	if (flag == 1)
		cout << "Co";
	else
		cout << "Khong";
}