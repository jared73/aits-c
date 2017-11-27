#include<stdio.h>
#include<iostream>

int main2_2() {
	int x, y, z, min;
	printf("请输入x：\n");
	scanf_s("%d", &x);
	printf_s("请输入y:\n");
	scanf_s("%d", &y);
	printf_s("请输入z:");
	scanf_s("%d", &z);

	if (x < y) {
		min = x;
	}
	else {
		min = y;
	}

	if (min < z) {
		printf("输出z为：%d\n", z);
	}
	else {
		min = z;
	}
	printf("输出z为：%d\n", z);

	system("pause");
	return 0;
}