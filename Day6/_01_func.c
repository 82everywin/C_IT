#include <stdio.h>


// �Լ�
// �ڷ��� �Լ���()	{}
// () : �Է¹��� ��
// {} : ����
// �Լ��� : �Լ���
// �ڷ��� : ���ϰ��� ����

void func() {
	printf("�Լ� 1 ��� \n");
	// void : ���ϰ� ���
	// () : ��������� ���� �� ����
}

void func2(int num) {
	printf("�Լ�2 ��� \n");
	// void : ���ϰ� ����
	// () : int������ �ϳ� ������ ����� �� ������ �ϳ��� �־���� ��
}

void func3(char c) {
	printf("�Լ� 3 ��� \n");
	// void : ���ϰ� ����
	// () : char ���� �Ѱ��� ������ ����� �� ���� �ϳ��� �־���� ��
}

void func4(int n1, int n2) {
	printf("%d \n", n1 + n2);
	// () : ù��° ���ڴ� n1��, �ι�° ���ڴ� n2�� ����. 
	// void : ���ϰ� ���� 
}
int func5(int num1, int num2) {
	int result = num1 + num2;
	return result;			// ����� ������ return ���� ������ ����

	// () : �޴� ��
	// {} : �ִ� �� 
}

char func6(int num) {
	if (num >= 0) {
		return 'Y';
	}
	else {
		return 'N';
	}
}

int main1() {
	func();					// �ƹ����� �ȳѰ��൵ ��
	func2(314);				// int ���� �ϳ��� �ްԲ� ����������� ���� �Ѱ��� ����� ��
	func3('A');				// ���� ���� �Ѱ� ���������A ��
	func4(3, 5);			// ù��° ���� ù��° ����(n1)��, �ι�° ���� �ι�° ����(n2)�� ���

	// () : �Լ��� ���� ����
	// return : �Լ��κ��� ���� ���޹��� 
	int number = 5 + 10;			// ���x , return ���� ������� �˷���
	int number1 = func5(5,10);	
	
	printf("%d \n", 5 + 10);				// 5+10
	printf("%d \n", func5(5, 10));			// func5(5,10)
	
	// func6 : ������� ������ Y�� �˷��ְ�, �������� ������ N�� �˷��ִ� ���
	printf("%c\n", func6(10));
	printf("%c\n", func6(1));
	printf("%c\n", func6(-5));

	return 0;

}