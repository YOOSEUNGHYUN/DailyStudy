//studying goto

#include <iostream>
#include <cmath> //sqrt()

using namespace std;

int main()
{
	double x;

	tryAgain : //label 책갈피처럼 쓴다.

	cout << "Enter a non-negative number" << endl; //음수가 아닌 숫자를 입력해라
	cin >> x;

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;

	return 0;

}
