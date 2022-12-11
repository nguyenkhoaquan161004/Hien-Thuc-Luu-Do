#include <iostream>
#include <cmath>
using namespace std;
void C(float& );
float F(float);
int main()
{
	float c;
	C(c);
	float doF = F(c);
	cout << "f= " << doF;
	return 1;
}
void C(float& c)
{
	cout << "c= ";
	cin >> c;
}
float F(float c)
{
	return (9 / 5) * c + 32;
}