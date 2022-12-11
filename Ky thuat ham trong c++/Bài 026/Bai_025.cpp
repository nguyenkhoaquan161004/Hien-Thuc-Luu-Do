#include <iostream>
using namespace std;
void Nhap(int&, int&);
int Xuat(int&, int&);
int main()
{
	int a, b;
	Nhap(a, b);
	Xuat(a, b);
	cout << "a= " << a << " b= " << b;
	return 0;
}
void Nhap(int& a, int& b)
{
	cout << "a= ";
	cin >> a;
	cout << " b= ";
	cin >> b;
}
int Xuat(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}