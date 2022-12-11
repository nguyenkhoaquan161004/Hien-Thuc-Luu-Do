#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float&);
float DienTich(float);
int main()
{
	float r;
	Nhap(r);
	float xq = DienTich(r);
	cout << "Dien tich xung quanh = " << xq;
}
void Nhap(float& r)
{
	cout << "r= ";
	cin >> r;
}
float DienTich(float r)
{
	return 4 * 3.14 * r * r;
}