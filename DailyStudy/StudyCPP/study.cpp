//studying switch-case
#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	switch (x)
	{
		case 0:
		{
			int y = 5;
			y = y + x;
			cout << y << endl;
			break;
		}

		case 1:
		{
			int y = 5;
			y = y - x;
			cout << y << endl;
			break;
		}

		default: //case에 정의되지않은 모든 경우에 대해서 실행
			cout << "Undefined input" << x << endl;
	}

	return 0;
}