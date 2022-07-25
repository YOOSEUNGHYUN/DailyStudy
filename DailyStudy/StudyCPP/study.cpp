//studying Passing Arguments by Reference(Call by Reference))
#include <iostream>
#include <cmath> //sin(), cos()

using namespace std;

void getSinCos(const double &degrees, double &sin_out, double &cos_out)
{
	static const double pi = 3.141592 / 180.0;

	const double radians = degrees * pi;

	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	return 0;
}

