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

	//2������ ����
	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0; //flag�� 0�� �־��ָ� ���� 0
	cout << "No item " << bitset<8>(items_flag) << endl; //char�� 8bit �ϱ�

	//item0 on �������ٰ� �̺�Ʈ�߻��ؼ� ������0�� ��Ե�
	
	//items_flag���� ���� �����ʿ� �ִ� ���ڸ� 1�� �ٲ��ָ� ��
	//bitwise or�� assignment operator�� ����ؼ�
	items_flag |= opt0; //���� �������� ����� �����ϱ� 
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

	//obtain item 2, 3  ���ÿ� ���� �ȴ�
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained " << bitset<8>(opt2 | opt3) << endl;

	//item2�� �����ְ� item1�� ���� ��, �̺�Ʈ �߻��ؼ� item2�� �Ұ� item1�� ��� �Ǵ� ��Ȳ 
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt2 | opt1);
	}
	cout << bitset<8>(items_flag) << endl;

	return 0;
}
	
