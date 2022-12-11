#include<iostream>
#include<cmath>
using namespace std;
void Nhap(float& r);
float TheTich(float);
int main()
{
	float r;
	Nhap(r);
	float tv = TheTich(r);
	cout << "The tich = " << tv;
}
void Nhap(float& r)
{
	cout << "r= ";
	cin >> r;
}
float TheTich(float r)
{
	return (4 / 3) * 3.14 * r * r * r;
}