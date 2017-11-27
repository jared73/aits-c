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
	// %d，用来输出十进制整数
	// %f，用来输出实数（包括单，双精度）
	// %c，用来输出一个字符
	// %s，用来输出一个字符串
	printf("%d %c\n", a, ch);
	//起到暂停效果，可以让cmd不至于一闪而过
	getchar();
	return 0;
}