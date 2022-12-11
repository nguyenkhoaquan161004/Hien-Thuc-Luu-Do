#include<iostream>
using namespace std;
void Nhap(float&);
float Xuat(float);
int main()
{
	float x;
	Nhap(x);
	float x6 = Xuat(x);
	cout << "x6= " << x6;
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
	return x4 * x2;
}
