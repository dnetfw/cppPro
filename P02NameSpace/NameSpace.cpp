#include <iostream>

namespace sample {
	void SampleMethod() {
		std::cout << "> sample ���ӽ����̽� �� SampleMethod �Լ��Դϴ�." << std::endl;
	}
	namespace nested {
		void SampleMethod() {
			std::cout << " >> nested ���ӽ����̽� �� SampleMethod �Լ��Դϴ�." << std::endl;
		}
}


}

int main() {
	sample::SampleMethod();
	sample::nested::SampleMethod();
	return 0;
}