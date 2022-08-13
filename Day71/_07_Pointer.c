#include <stdio.h>

void Swap(int num1, int num2)
{
	int backup = num1;			// num1�ȿ� ���� ����صд�.
	num1 = num2;				// num2�� ������ num1�� �����Ѵ�.
	num2 = backup;				// ����� ��(num1)�� num2�� �ִ´�.
}

void Swap2(int *num1, int *num2)
{	
	// num1 == &n1;		// �Լ��� ����� ��, ���� ������ �������� &n1�� �Ű������� ����Ͽ����� n1�� �ּ� == �����ͺ��� num1�� �ּҸ� �����ϰ� �Ǿ����� 
	// num2 == &n2;
	int backup = *num1;			// &n1 (x) (== n1�� �ּ��̹Ƿ�) ==> 'n1 �� ��'�� �Ѱ��ְ� ���� (== *num1) 
	*num1 = *num2;				// *num1= *(&n2)  �ڷ��� ���� *�� �ƴϹǷ� => ������ // ��, �ּ�(num1)�� �ƴ� ��(*num1)�� ���ϴ� ����
	*num2 = backup;				// num2(�ּ�) (x) --> *num2 (o) ==> �ּҰ� �ƴ� ���� �Ѱ���� �ϹǷ� 
}
int main7()
{
	int n1 =3; 
	int n2 =2;
	printf("�ٲٱ� �� : %d, %d \n", n1, n2);

	//Swap�̶�� �Լ��� ���ؼ� n1�� n2�� ���� �ٲ��ְ� ����
	Swap2(&n1, &n2);

	printf("�ٲ� �� : %d, %d \n", n1, n2);

	return 0;
}

// only SW : ������ �ʿ�x (��, �� : JAVA, Python)
// HW+SW : �ϵ���� ������ ���ؼ� ������ �ʿ�(�߿���, IOT : C���)