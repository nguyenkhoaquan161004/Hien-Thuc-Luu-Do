#include <iostream>
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
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	if (flag)
		cout << "Ton tai";
	else
		cout << "Khong ton tai";
}