#include <iostream>
using namespace std;
void Nhap(int&, float&);
float ChuVi(int, float);
int main()
{
	int n;
	float r;
	Nhap(n, r);
	float cv = ChuVi(n, r);
	cout << "Chu vi= " << cv;
	return 1;
}
void Nhap(int& n ,float& r)
{
	cout << "n= ";
	cin >> n;
	cout << "r= ";
	cin >> r;
}
float ChuVi(int n,float r)
{
	return 2 * n * r * sin(3.14 / n);
}