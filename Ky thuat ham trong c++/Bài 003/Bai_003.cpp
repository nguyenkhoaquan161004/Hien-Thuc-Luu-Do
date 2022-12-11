#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&);
float ChuVi(float);
int main()
{
	float r;
	Nhap(r);
	float cv = ChuVi(r);
	cout << "Chu vi= " << cv;
}
void Nhap(float& r)
{
	cout << "r = ";
	cin >> r;
}
float ChuVi(float r)
{
	return 2 * 3.14 * r;
}