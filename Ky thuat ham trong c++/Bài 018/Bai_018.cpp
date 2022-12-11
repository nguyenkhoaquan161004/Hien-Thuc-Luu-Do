#include<iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
float Xuat(float, float);
int main()
{
	float x, y;
	Nhap(x, y);
	float x32 = Xuat(x, y);
	cout << "x" << y << "= " << x32;
	return 0;
}
void Nhap(float& x, float& y)
{
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
}
float Xuat(float x, float y)
{
	return pow(x, y);
}
