#include <stdio.h>


// 선언
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate); // 전체 total 개에서 ate 개를 먹고 남은 개수를 반환하는 함수
int add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);
int div(int num, int num2);


int main_function(void)
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
	//function_without_return();
	
	// 반환값이 있는 함수 
	/*int ret = function_with_return();
	p(ret);*/

	// 파라미터(전달값)이 없는 함수
	//function_without_params();
	
	// 파라미터(전달값)이 있는 함수
	//function_with_params(1, 2, 3);
	
	// 파라미터(전달값)도 받고, 반환값이 있는 함수
	//int ret = apple(5, 2); // 5개의 사과 중에서 2개를 먹었어요.
	//printf("사과 5개 중에 2개를 먹으면 %d 개가 남아요.\n", ret);
	//printf("사과 %d 개 중에 %d 개를 먹으면? %d 개가 남아요.\n", 10, 4, apple(10, 4));
	

	// 계산기 함수
	/*int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);*/
	


	
	
	
	
	
	
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

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며 값은 %d, %d, %d입니다.\n", num1, num2, num3);
}

int apple(int total, int ate)
{
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
		// 전체 total 개에서 ate 개를 먹고 남은 개수를 반환하는 함수
}

int add(int num, int num2)
{
	return num + num2;
}

int sub(int num, int num2)
{
	return num - num2;
}

int mul(int num, int num2)
{
	return num * num2;
}

int div(int num, int num2)
{
	return num / num2;
}
