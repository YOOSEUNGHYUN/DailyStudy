//Bit flags
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	const unsigned char opt0 = 1 << 0; 
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	//opt4, 5, 6, 7

	//2진수로 찍어보기
	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0; //flag에 0을 넣어주면 전부 0
	cout << "No item " << bitset<8>(items_flag) << endl; //char은 8bit 니까

	//item0 on 지나가다가 이벤트발생해서 아이템0을 얻게됨
	
	//items_flag에서 가장 오른쪽에 있는 숫자를 1로 바꿔주면 됨
	//bitwise or와 assignment operator를 사용해서
	items_flag |= opt0; //위에 이진수로 만들어 놨으니까 
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	//item3 on
	items_flag |= opt3; 
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	//item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	//has item1?
	if (items_flag & opt1)
	{
		cout << "Has item1" << endl;
	}
	else
	{
		cout << "Not Have item1" << endl;
	}

	//has item0?
	if (items_flag & opt0)
	{
		cout << "Has item0" << endl;
	}

	//obtain item 2, 3  동시에 갖게 된다
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained " << bitset<8>(opt2 | opt3) << endl;

	//item2는 갖고있고 item1은 없을 때, 이벤트 발생해서 item2는 잃고 item1은 얻게 되는 상황 
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt2 | opt1);
	}
	cout << bitset<8>(items_flag) << endl;

	return 0;
}
	
