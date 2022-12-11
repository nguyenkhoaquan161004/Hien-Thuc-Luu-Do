#include <iostream>
using namespace std;
int Xuat(int);
int main()
{
	int n;
	cout << "n= ";
	cin >> n;
	int s = Xuat(n);
	cout << "Tong = " << s;
	return 0;
}
int Xuat(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i = i + 1)
		s = s + i;
	return s;
}