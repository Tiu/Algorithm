/*********************�ַ�����λ����������********************/
/*���������ַ���s1��s2,Ҫ���ж�s2�Ƿ��ܹ���s1��ѭ����λ�õ���*/
/*�ַ������������磬����s1=AABCD��s2=CDAA������true������s1= */
/*ABCD��s2=ACBD,����false��                                  */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rotateCompare(char *src, char *des);
int main()
{
	string src = "AABCD";
	string des = "CDAA";

	if(rotateCompare(src,des))
		printf("true");
	else
		printf("false");
	
	return 0;
}

int rotateCompare(char *src, char *des)
{
	char * pc = src;
	while(*des != '\0')
	{
		while(*src != *des)	src++;
	}
	
} 