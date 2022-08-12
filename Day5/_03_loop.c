#include <stdio.h>

void main3() {
	// break : 반복문 즉시 종료
	// continue : 반복문 처음으로 (1회성 취소)

	// for( 초기값 : 조건 : 증감) {}
	// 1. 초깃값 2. 조건 3. {} 4. 증감
	// 5. 조건 6. {} 7. 증감
	// 8. 조건 9.{} 10. 증감

	for (int i = 1; i < 11; i++)
	{
		if (i % 2 ==1 ) {
			continue;		// 반복문 처음으로  => 현재단계 진행 취소.종료
		}
		printf("%d \n", i);
	}

	//int flag = 1;
	//while (flag < 11) {
	//	printf("%d \n", flag);
	//	flag++;
	//}

	//  ctrl + shift + / => 전체 주석 처리
}