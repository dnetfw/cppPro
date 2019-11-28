// program1-03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>
#include <locale>

// xx xx xxxx 로 출력하는 기능 제공
void showDate(int m, int d, int y) {
	std::cout << std::setfill('0');
	std::cout << std::setw(2) << m << '/'
		<< std::setw(2) << d << '/'
		<< std::setw(4) << y << std::endl;
	std::cout << std::endl;
}

/*
	std::dec 10진법
	std::hex 16진법
	std::oct 8진법
	std::showbase 10진법이 아닌 16이나 8진법 출력시 자신의 진법표기
	std::left 왼쪽으로 정렬
	std::right 오른쪽으로 정렬
	std::internal 내부 폭 전체에 걸쳐서 정렬
	std::scientific 지수를 이용ㅇ한 실수ㄴ를 부동 소숫점 방식으로 출력
	std::hexfloat 실수를 16진법의 부동 소숫점방식으로 출력
	std::defaultfloat 실수를 디폴트 방식으로 출력
*/

int main()
{
	double x = 800000.0 / 81.0;
	// std::fixed 는 실수 출력시 고정 소숫점 자리 출력
	std::cout << std::fixed << std::setprecision(2) << x << std::endl;
	x = 2.0 / 3.0;
	// std::stprecision(4)는 소숫점 이하 자리를 4자리로 출력
	std::cout << std::fixed << std::setprecision(4) << x << std::endl;
	std::cout << std::endl;

	// 일자 함수 ㅅ호출
	showDate(1, 1, 2019);
	unsigned long x0 = 64206;

	std::cout << x0 << std::showbase
		<< " 8 진법은 \"" << std::oct << x0 << "\""
		<< " 16 진법은 \"" << std::hex << x0 << "\"" << std::endl;
	std::cout << std::endl;
	return 0;
}

