#include <iostream>

#define USE_INLINE 1

namespace AppVersion {
	namespace version1 {
		void display() {
			std::cout << "display() �Լ� version1" << std::endl;
		}
	}

	namespace version2 {
		void display() {
			std::cout << "display() �Լ� version2" << std::endl;
		}
	}

#if USE_INLINE
	inline
#endif
	namespace version3 {
		void display() {
			std::cout << "display() �Լ� version 3" << std::endl;

		}
		
	}
	namespace version3 {
		void whatsUp() {
			std::cout << "whatsup() �Լ� version 3" << std::endl;
		}
	}
}

	int main() {
		AppVersion::display(); //inline ������� ���Ͽ� version3 ����
		AppVersion::whatsUp();
		return 0;
	}