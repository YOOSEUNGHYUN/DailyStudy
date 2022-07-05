//studying Multidimensional Arrays
#include <iostream>
using namespace std;

int main()
{
	const int num_rows = 10;
	const int num_columns = 10;

	int product[num_rows][num_columns] = { 0 };

	for (int row = 0; row < num_rows; ++row)
		for (int col = 0; col < num_columns; ++col)
			product[row][col] = row * col;

	for (int row = 1; row < num_rows; ++row)
	{
		for (int col = 1; col < num_columns; ++col)
			cout << product[row][col] << '\t';
		cout << endl;

	}
	
	return 0;
}

