#include<iostream>
using namespace std;
void Nhap(float&);
float Xuat(float);
int main()
{
	float x;
	Nhap(x);
	float x7 = Xuat(x);
	cout << "x7= " << x7;
	return 0;
}
void Nhap(float& x)
{
	cout << "x= ";
	cin >> x;
}
float Xuat(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 =x4*x4;
	return x8 / x;
}
