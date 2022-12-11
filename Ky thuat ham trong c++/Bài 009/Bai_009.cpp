#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&, float&);
float DienTich(int, float);
int main()
{
	int n;
	float r;
	Nhap(n, r);
	float dt = DienTich(n, r);
	cout << "Dien tich= " << dt;
	return 0;
}
void Nhap(int& n, float& r)
{
	cout << "n= ";
	cin >> n;
	cout << "r= ";
	cin >> r;
}
float DienTich(int n, float r)
{
	return (float)1 / 2 * n * r * r * (float)sin(2 * 3.14 / n);
}