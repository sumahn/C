#include <stdio.h>


// 선언
void p(int num);

void function_without_return();
int main(void)
{
	// function 
	// 계산기

	//int num = 2;
	////printf("num은 %d입니다.\n", num);
	//p(num);

	//// 2 + 3은?
	//num += 3;
	////printf("num은 %d입니다.\n", num);
	//p(num);

	//// 5 - 1은?
	//num -= 1; // num = num - 1
	////printf("num은 %d입니다.\n", num);
	//p(num);

	//// 4 x 3은?
	//num *= 3;
	////printf("num은 %d입니다.\n", num);
	//p(num);

	//// 12 / 6은?
	//num /= 6;
	////printf("num은 %d입니다.\n", num);
	//p(num);

	
	// 함수 종류
	// 반환값이 없는 함수
	function_without_return();
	return 0;
}

// 정의
void p(int num) // void는 아무 것도 return하지 않는다는 뜻
{
	printf("num은 %d입니다.\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}