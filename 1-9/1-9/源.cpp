//编写程序，使用while循环将50到100的整数相加。
#include <iostream>
int main() {
	int i = 50, sum = 0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	std::cout << "The sum is " << sum << std::endl;
	system("pause");
	return 0;
}