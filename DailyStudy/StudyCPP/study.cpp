//studying goto

#include <iostream>
#include <cmath> //sqrt()

using namespace std;

int main()
{
	double x;

	tryAgain : //label å����ó�� ����.

	cout << "Enter a non-negative number" << endl; //������ �ƴ� ���ڸ� �Է��ض�
	cin >> x;

	if (x < 0.0)
		goto tryAgain;

	cout << sqrt(x) << endl;

	return 0;

}
