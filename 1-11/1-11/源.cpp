//编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
#include <iostream>
int main() {
	int m = 0, n = 0, i = 0;
	std::cout << "Please enter two number:";
	std::cin >> m >> n;
	if (m < n-1) {
		i = m;
		while (i < n-1) {
			i++;
			std::cout << i << ",";
		}
	}
	else if (m-1 > n) {
		i = n;
		while (i < m-1) {
			i++;
			std::cout << i << ",";
		}
	}
	else {
		std::cout << "none";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}