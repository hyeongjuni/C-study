#include <iostream>
//�����ε� : ������ �̸��� �Լ��� �����ϴ� 
void MyF(void)
{
	std::cout << "MyF(void) called" << std::endl;
}

void MyF(char c)
{
	std::cout << "MyF(charc) called" << std::endl;
}

void MyF(int a, int b)
{
	std::cout << "MyF(int a, int b) called" << std::endl;
}

int main(void)
{
	MyF();	//3���� �Լ� ȣ��
	MyF('A');	//char��
	MyF(12, 13);	//int �ڷ� 2��
	return 0;
}