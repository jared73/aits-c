/*��������a,b,c��Ҫ��˳���ӡ����*/
#include<stdio.h>
#include<iostream>

int main() {
	int a=1, b, c,temp;
	
	printf("������a��\n");
	scanf_s("%d", &a);
	printf("������b��\n");
	scanf_s("%d", &b);
	printf("������c��\n");
	scanf_s("%d", &c);

	if (a > b) {

	}
	else {
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c) {
		printf("˳��Ϊ��%d+' '+%d+' '+%d", c, a, b);
	}
	else {
		if (b > c) {
			printf("˳��Ϊ��%d+' '+%d+' '+%d", a, b, c);
		}
		else {
			printf("˳��Ϊ��%d+' '+%d+' '+%d", a, c, b);
		}
	}

	system("pause");
	return 0;
}