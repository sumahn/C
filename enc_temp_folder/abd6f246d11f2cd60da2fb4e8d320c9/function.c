#include <stdio.h>


// ����
void p(int num);

void function_without_return();
int main(void)
{
	// function 
	// ����

	//int num = 2;
	////printf("num�� %d�Դϴ�.\n", num);
	//p(num);

	//// 2 + 3��?
	//num += 3;
	////printf("num�� %d�Դϴ�.\n", num);
	//p(num);

	//// 5 - 1��?
	//num -= 1; // num = num - 1
	////printf("num�� %d�Դϴ�.\n", num);
	//p(num);

	//// 4 x 3��?
	//num *= 3;
	////printf("num�� %d�Դϴ�.\n", num);
	//p(num);

	//// 12 / 6��?
	//num /= 6;
	////printf("num�� %d�Դϴ�.\n", num);
	//p(num);

	
	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	function_without_return();
	return 0;
}

// ����
void p(int num) // void�� �ƹ� �͵� return���� �ʴ´ٴ� ��
{
	printf("num�� %d�Դϴ�.\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}