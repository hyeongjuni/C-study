#include <iostream>
int main(void)
{
	int howmuch;
	
	while (1)
	{
		std::cout << "판매 금액 만원 단위로 입력 : ";
		std::cin >> howmuch;
		if (howmuch == -1)
			break;

		std::cout << "이번 달 급여 : " << 50 + howmuch * 0.12  <<"만원" << std::endl;
	}

	return -1;
}