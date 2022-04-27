//studying break,continue
#include <iostream>

using namespace std;

int main()
{
	int count(0);
	
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'x')
			break;

		cout << ch << " " << count++ << endl;
		
	}

	return 0;
}

