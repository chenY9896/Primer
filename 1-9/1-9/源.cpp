//��д����ʹ��whileѭ����50��100��������ӡ�
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