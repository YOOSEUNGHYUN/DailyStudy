//studying Scoped Enumerations (Enum Class)
#include <iostream>

using namespace std;

int main()
{
	enum class Color
	{
		RED,
		BLUE,
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color1 = Color::BLUE;
	Color color2 = Color::BLUE;

	if (color1 == color2)
	{
		cout << "Same color " << endl;
	}
	else
		cout << "Different color" << endl;
	
	return 0;
}
	

