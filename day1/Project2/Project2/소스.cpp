#include <iostream>
int main(void)
{
	int howmuch;
	
	while (1)
	{
		std::cout << "�Ǹ� �ݾ� ���� ������ �Է� : ";
		std::cin >> howmuch;
		if (howmuch == -1)
			break;

		std::cout << "�̹� �� �޿� : " << 50 + howmuch * 0.12  <<"����" << std::endl;
	}

	return -1;
}