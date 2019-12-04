#include <iostream>

#define USE_INLINE 1

namespace AppVersion {
	namespace version1 {
		void display() {
			std::cout << "display() 함수 version1" << std::endl;
		}
	}

	namespace version2 {
		void display() {
			std::cout << "display() 함수 version2" << std::endl;
		}
	}

#if USE_INLINE
	inline
#endif
	namespace version3 {
		void display() {
			std::cout << "display() 함수 version 3" << std::endl;

		}
		
	}
	namespace version3 {
		void whatsUp() {
			std::cout << "whatsup() 함수 version 3" << std::endl;
		}
	}
}

	int main() {
		AppVersion::display(); //inline 사용으로 인하여 version3 생략
		AppVersion::whatsUp();
		return 0;
	}