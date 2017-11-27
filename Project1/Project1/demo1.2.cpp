#include<stdio.h>  /*包含头文件*/
#include <iostream>
#define Height 10	/*定义变量*/
int	calculate(int Long, int Width); /*函数声明*/

int main1_2()    /*主函数main*/
{
	int	m_Long;			/*定义整型变量，表示长度*/
	int m_Width;		/*定义整型变量，表示宽度*/
	int result;			/*定义整型变量，表示长方形的体积*/

	printf("长方形的高度为：%d\n", Height);    /*显示提示*/
	printf("请输入长度\n");		/*显示提示*/
	scanf_s("%d", &m_Long);	/*输入长方体的长度*/
	
	printf("请输入宽度\n");     
	scanf_s("%d", &m_Width);      /*输入长方体的宽度*/

	result = calculate(m_Long, m_Width);	/*调用函数，计算体积*/
	printf("长方形体积是：");
	printf("%d\n", result);
	//getchar();
	system("pause");
	return 0;


}

int calculate(int Long, int Width)
{
	int result = Long*Width*Height;
	return result;
}
