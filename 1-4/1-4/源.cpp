//我们的程序使用加法运算符+来将两个数相加。编写程序时用乘法运算符*，来打印两个数的积。
#include <iostream>
int main() {
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;
	system("pause");
	return 0;
}