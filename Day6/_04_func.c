#include <stdio.h>

// int g_num=0;				// �������� : {}�ȿ��� ������� ������ �ƴ�, {}�� ��� ���� ����
// ���������� ��𼭵� ��� �����ϳ� ������ �ȵǾ� �޸� ���� ���� --> �������

int function1(int* p_num) {
	int num = 3333;			// �������� 
	*p_num = num;			// �Ѱܹ��� ��ġ���ٰ� num���� ����

	return 0;
}

int function2(int num) {
	// 3333�� ���
	printf("%d \n", num);
}

int main4() {

	int num = 0;
	int* p_num = &num;			// num ��ġ�� �����ϰ�
	function1(p_num);			// ��ġ�� �Ѱܼ� 
	function2(num);
	return 0;
}