//编写程序，从cin读取一组数，输出其和。
#include <iostream>
int main() {
	int limit = 0, value = 0, sum = 0;
	std::cout << "How many number would you like to enter?" << std::endl;
	std::cin >> limit;
	while (std::cin >> value && (limit-- != 0))
		sum += value;
	std::cout << "The sum is " << sum << std::endl;
	system("pause");
	return 0;
}