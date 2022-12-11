#include<iostream>
using namespace std;
void doF(float&) ;
float doC(float);
int main()
{
	float f;
	doF(f);
	float c = doC(f);
	cout << "c= " << c;
	return 0;
}
void doF(float& f)
{
	cout << "f= ";
	cin >> f;
}
float doC(float f)
{
	return (float)5 / 9 * (f - 32);
}