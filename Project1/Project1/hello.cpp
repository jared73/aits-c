#include<stdio.h>
int main1() {
	//printf("hello world");
	//getchar();
	//char* str = "ABCDEFGHIJKL";
	//int* pInt = (int*)str;
	//printf("%c\n%c\n", *(str + 1), *(char *)(pInt + 1));
	//return 0;
	char ch = 'a';
	int a = (int)ch;
	// %d���������ʮ��������
	// %f���������ʵ������������˫���ȣ�
	// %c���������һ���ַ�
	// %s���������һ���ַ���
	printf("%d %c\n", a, ch);
	//����ͣЧ����������cmd������һ������
	getchar();
	return 0;
}