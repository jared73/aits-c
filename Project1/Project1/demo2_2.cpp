#include<stdio.h>
#include<iostream>

int main2_2() {
	int x, y, z, min;
	printf("������x��\n");
	scanf_s("%d", &x);
	printf_s("������y:\n");
	scanf_s("%d", &y);
	printf_s("������z:");
	scanf_s("%d", &z);

	if (x < y) {
		min = x;
	}
	else {
		min = y;
	}

	if (min < z) {
		printf("���zΪ��%d\n", z);
	}
	else {
		min = z;
	}
	printf("���zΪ��%d\n", z);

	system("pause");
	return 0;
}