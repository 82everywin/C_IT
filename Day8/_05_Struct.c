#include <stdio.h>

// ����ü Human (�̸�, ����)
typedef struct Human {
	char* name;
	int age;
}Human;

// �Լ� info( Human*) : �̸��� ���� ���
int Info(Human* human)
{
	printf("�̸� : %s, ���� : %d \n", human->name, human->age);
}

// �Լ�2 Modify(Human*) : scanf�� ���ؼ� ���̸� ����
int Modify(Human* human)
{
	printf("���� ���� : ");
	scanf("%d ", &(human->age));
}

int main()
{
	// ����ü ���� �ʱ�ȭ
	Human �⺻���� = { "������", 23 };

	// �������
	Info(&�⺻����);

	// �����ϴ� �Լ�
	Modify(&�⺻����);
	Info(&�⺻����);

	return 0;
}