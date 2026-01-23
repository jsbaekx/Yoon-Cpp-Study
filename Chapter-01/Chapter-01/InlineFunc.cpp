#include <iostream>

inline int SQUARE(int x)	//inline을 컴파일러에 요청
{
	return x * x;
}

int main()
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}