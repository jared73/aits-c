#include<stdio.h>
#include<iostream>

int	getMultiply(int mul,int	i,int n);

int main2_1()
{
	int i = 1;
	int mul = 1;
	int n;
	printf("������n\n");
	scanf_s("%d",&n);
	mul=getMultiply(mul, i,n);
	printf("mul��ֵΪ��%d\n", mul);
	system("pause");
	return 0;
}

int getMultiply(int mul, int i, int n)
{
	if (i <= n) {
		mul = mul*i;
		i++;
		return getMultiply(mul, i, n);
	}
	return mul;
}
