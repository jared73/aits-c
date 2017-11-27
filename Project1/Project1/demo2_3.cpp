/*键盘输入a,b,c，要求按顺序打印出来*/
#include<stdio.h>
#include<iostream>

int main() {
	int a=1, b, c,temp;
	
	printf("请输入a：\n");
	scanf_s("%d", &a);
	printf("请输入b：\n");
	scanf_s("%d", &b);
	printf("请输入c：\n");
	scanf_s("%d", &c);

	if (a > b) {

	}
	else {
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c) {
		printf("顺序为：%d+' '+%d+' '+%d", c, a, b);
	}
	else {
		if (b > c) {
			printf("顺序为：%d+' '+%d+' '+%d", a, b, c);
		}
		else {
			printf("顺序为：%d+' '+%d+' '+%d", a, c, b);
		}
	}

	system("pause");
	return 0;
}