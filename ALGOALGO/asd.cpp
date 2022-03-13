#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int k, n, m, digit, count = 0;
	printf("m을 입력하시오 : ");
	scanf("%d", &m);
	printf("몇개의 데이터를 처리할까요? ");
	scanf("%d", &n);

	printf("%d개의 데이터 입력 \n", n);
	for (k = 0; k < n; k++) {
		scanf("%d", &digit);
		if ((digit % m) == 0) count++;
	}
	printf("%d로 나누어 떨어지는 데이터의 갯수 = %d\n",m, count);
}