#include <iostream>
#include <cmath>
using namespace std;
void BanKinh(float&);
float DienTich(float);
int main()
{
	float r;
	BanKinh(r);
	float dt = DienTich(r);
	cout << "Dien tich = " << dt;
}
void BanKinh(float& r)
{
	cout << "r= ";
	cin >> r;
}
float DienTich(float r)
{
	return 3.14 * r * r;
}