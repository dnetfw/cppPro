#include <iostream>
#include <iomanip>

int main(int argc, char* argv[], char* const envp[]) { // envp ȯ�溯�� ����Ʈ
	for (int i = 0; i < argc; ++i) {
		std::cout << i << " : " << argv[i] << '\n';

	// ȯ�溯���� �������� �ּҸ� ������Ű�鼭 ������ ���.
	while (*envp)
		std::cout << *envp++ << std::endl; // ���߿� ȯ�溯���� ������ �����ϰ� �����......���� ������?

	return 0;
	}
}