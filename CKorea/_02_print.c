#include <stdio.h>

void main2() {
	//���� ����� �� ���� �����ʹ� �����س��� : ���� 
	
	char name = 'A';			// ����
	int number = 123;			// ����(����)
	float number2 = 3.14f;		// �Ҽ��� �ִ� ����(�Ǽ�)
	
								
	// ���� : �������
	// ����������� ��������̸� = ������ �� ;

	printf("Hello %c \n", name);		//���� ���
	printf("Hello %d \n", number);		//���� ���
	printf("Hello %f \n", number2);		//�Ǽ� ���

	//%c : �� ����
	//%d : ����
	//%f : �Ҽ��� �ִ� ����
	//%s : ���� ����
}