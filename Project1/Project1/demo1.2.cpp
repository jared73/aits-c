#include<stdio.h>  /*����ͷ�ļ�*/
#include <iostream>
#define Height 10	/*�������*/
int	calculate(int Long, int Width); /*��������*/

int main1_2()    /*������main*/
{
	int	m_Long;			/*�������ͱ�������ʾ����*/
	int m_Width;		/*�������ͱ�������ʾ���*/
	int result;			/*�������ͱ�������ʾ�����ε����*/

	printf("�����εĸ߶�Ϊ��%d\n", Height);    /*��ʾ��ʾ*/
	printf("�����볤��\n");		/*��ʾ��ʾ*/
	scanf_s("%d", &m_Long);	/*���볤����ĳ���*/
	
	printf("��������\n");     
	scanf_s("%d", &m_Width);      /*���볤����Ŀ��*/

	result = calculate(m_Long, m_Width);	/*���ú������������*/
	printf("����������ǣ�");
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
