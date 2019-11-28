#include <iostream>
#include <iomanip>

int main(int argc, char* argv[], char* const envp[]) { // envp 환경변수 리스트
	for (int i = 0; i < argc; ++i) {
		std::cout << i << " : " << argv[i] << '\n';

	// 환경변수는 포인터의 주소를 증가시키면서 내용을 출력.
	while (*envp)
		std::cout << *envp++ << std::endl; // 나중에 환경변수도 수정이 가능하게 만들수......있지 않을까?

	return 0;
	}
}