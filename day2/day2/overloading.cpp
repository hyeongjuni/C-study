#include <iostream>
//오버로딩 : 동일한 이름의 함수를 정의하는 
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
	MyF();	//3행의 함수 호출
	MyF('A');	//char형
	MyF(12, 13);	//int 자료 2개
	return 0;
}