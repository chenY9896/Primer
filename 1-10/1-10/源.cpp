//除了++运算符将运算对象的值增加1之外，还有一个递减运算符（--）实现将值减少1.编写程序，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
#include <iostream>
int main() {
	int i = 10;
	while (i >= 0) {
		std::cout << i << ",";
		i--;
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}