#include <iostream>
using namespace std;
void Nhap(int&);
float Xuat(int);
int main()
{
	int n;
	Nhap(n);
	cout << "So luong chu le = " << Xuat(n);
	return 0;
}
void Nhap(int&n)
{
	cout << "n = ";
	cin >> n;
}
float Xuat(int n)
{
	int s = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			s++;
		t = t / 10;
	}
	return s;
}