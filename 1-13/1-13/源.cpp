//使用for循环重做1.4.1节中的所有练习。
#include <iostream>
//1-9
/*
int main() {
	int sum = 0;
	for (int i = 50; i <= 100;i++)
		sum += i;
	std::cout << "The sum is " << sum << std::endl;
	system("pause");
	return 0;
}
*/
//1-10
/*
int main() {
	for(int i = 10;i >= 0;i--)
		std::cout << i << ",";
	std::cout << std::endl;
	system("pause");
	return 0;
}
*/
//1-11

int main() {
	int m = 0, n = 0, i = 0;
	std::cout << "Please enter two number:";
	std::cin >> m >> n;
	if (m < n - 1) 
		for(int i=m+1;i<n;++i)
			std::cout << i << ",";
	else if (m - 1 > n)
		for(int i=n+1;i<m;++i)
			std::cout << i << ",";
	else {
		std::cout << "none";
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}