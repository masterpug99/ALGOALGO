#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int k, n, m, digit, count = 0;
	printf("m�� �Է��Ͻÿ� : ");
	scanf("%d", &m);
	printf("��� �����͸� ó���ұ��? ");
	scanf("%d", &n);

	printf("%d���� ������ �Է� \n", n);
	for (k = 0; k < n; k++) {
		scanf("%d", &digit);
		if ((digit % m) == 0) count++;
	}
	printf("%d�� ������ �������� �������� ���� = %d\n",m, count);
}