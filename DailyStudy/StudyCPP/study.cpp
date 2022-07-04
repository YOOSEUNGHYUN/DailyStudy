//studying array and selection sort
#include <algorithm>
#include <iostream>

using namespace std;

void printArray(const int array[], const int length) //lenth 도 같이 보내줘야 함
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}

int main()
{
	/*				value	index
	3 5 2 1 4		  1		  3
	1 5 2 3 4		  2		  2
	1 2 5 3 4		  3		  3
	1 2 3 5 4		  4		  4
	1 2 3 4 5 
	*/
	
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array, length);

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		// swap two values in the array
		// std::swap(array[smallestIndex], array[startIndex]);
		{
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;
		}

		printArray(array, length);
	}

	return 0;
}


//int main()
//{
//    const int length = 5;
//    int array[length] = { 3, 5, 2, 1, 4 };
//
//    std::sort(array, array + length);
//
//    for (int i = 0; i < length; ++i)
//        std::cout << array[i] << ' ';
//
//    return 0;
//}
