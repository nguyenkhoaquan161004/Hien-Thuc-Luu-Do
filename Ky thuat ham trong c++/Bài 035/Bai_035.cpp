#include <iostream>
using namespace std;
void Nhap(int&);
int Xuat(int&);
int main()
{
	int n;
	Nhap(n);
	int s = Xuat(n);
	cout << "Tich = " << s;
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
int Xuat(int& n)
{
	int t = 1;
	for (int i = 1; i <= n; i++)
		t = t * i;
	return t;
}