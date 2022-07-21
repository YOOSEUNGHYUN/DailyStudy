//studying Pointers to pointers and dynamic multidimensional arrays
#include <iostream>

using namespace std;

int main()
{
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int *matrix = new int[row*col];

	for (int r = 0; r < row; ++r)
		for (int c = 0; c < col; ++c)
			matrix[c + col*r] = s2da[r][c];

	// print all elements
	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
			cout << matrix[c + col*r] << " "; 
		cout << endl;
	}

	delete[] matrix;

	//int **matrix = new int* [row];

	//for(int r = 0; r < row; ++r)
	//	matrix[r] = new int[col];

	//for (int r = 0; r < row; ++r)
	//	for (int c = 0; c < col; ++c)
	//		matrix[r][c] = s2da[r][c]; //matrix에 값을 대입하는 부분을 넣어줌

	//// print all elements
	//for (int r = 0; r < row; ++r)
	//{
	//	for (int c = 0; c < col; ++c)
	//		cout << matrix[r][c] << " "; //이게 matrix 자체다
	//	cout << endl;//줄이(row가) 바뀔 때마다 endl; 하나씩 넣어줌
	//}

	//// delete
	//for (int r = 0; r < row; ++r)
	//	delete [] matrix[r];

	//delete[] matrix;

	///*delete[] r1;
	//delete[] r2;
	//delete[] r3;
	//delete[] matrix;*/

	return 0;

}
	

