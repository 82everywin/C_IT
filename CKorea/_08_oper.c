#include <stdio.h>

void main8() {

	// 3-5
	// 1+1
	// 2=1
	// 3*3
	// 10/2
	// 10.0/3.0

	int result1 = 3 - 5;
	int result2 = 1 + 1;
	int result3 = 2 - 1;
	int result4 = 3 * 3;
	int result5 = 10 / 2;
	float result6 = 10.0 / 3.0;

	printf("3 - 5 = %d \n", result1);
	printf("1 + 1 = %d \n", result2);
	printf("2 - 1 = %d \n", result3);
	printf("3 x 3 = %d \n", result4);
	printf("10 �� 2 = %d \n", result5);
	printf("10.0 �� 3.0 = %.2f \n", result6);

	// % : ������ ���ϱ�
	// 10 % 3 = 1 �������� 1...

	int result9 = 10 % 3;		// ==1
	printf("10 % 3 = %d \n", result9);
	printf("10�� 3���� ���� �������� %d�̴�. \n", result9);

	// ����� ���� ��, Ȧ¦�� ������ �� 
	// 3�� ��� == 3 ���� ���� �������� 0
	printf("3�� ����� %d�� 0�� ����.\n", result9);

	int num = 3;
	printf("num�� Ȧ���� 1,¦���� 0 : %d \n", num % 2);

}