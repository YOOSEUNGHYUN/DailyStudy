//Quiz1. 
//이진수 0110을 >> 2 하고 decimal 로 나오게 출력
//Quiz2.
//5 | 12
//5 & 12
//5 ^ 12

#include <iostream>
#include <bitset>  //2진수로 바꿔서 출력해주는 라이브러리
using namespace std;

int main()
{
	//Quiz1
	unsigned int c = 0b0110;
	cout << bitset<4>(c >> 2) << " " << (c >> 2) << endl;


	//Quiz2
	unsigned int a = 5;
	unsigned int b = 12;

	cout << bitset<4>(a) << endl;
	cout << bitset<4>(b) << endl;
	cout << bitset<4>(a & b) << endl; //Bitwise AND
	cout << bitset<4>(a | b) << endl; //Bitwise OR
	cout << bitset<4>(a ^ b) << endl; //Bitwise XOR

	return 0;

}

	