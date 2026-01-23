#include <iostream>
using namespace std;
int num1 = 10;
namespace AAA {
	namespace BBB {
		namespace CCC {
			int num1;
		}
	}
}

int main()
{
	namespace ABC = AAA::BBB::CCC;
	ABC::num1 = 1;
	cout << ABC::num1 << endl;
	cout << ::num1 << endl; // 전역변수 지정 시 ::사용
	return 0;
}