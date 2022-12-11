#include<iostream>
using namespace std;
void Nhap(int&);
float Xuat(float);
int main()
{
	int n;
	Nhap(n);
	cout << "Tong = " << Xuat(n);
	return 0;
}
void Nhap(int& n)
{
	cout << "n= ";
	cin >> n;
}
float Xuat(float n)
{
	float s = 0;
	for (int i = 1; i <= n; i = i + 1)
		s = s + (float)1/(i*(i+1)*(i+2)*(i+3));
	return s;
}