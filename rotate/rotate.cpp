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
	char src[] = "AABCD";
	char des[] = "CDAA";

	if(rotateCompare(src,des))
		printf("true");
	else
		printf("false");
	
	return 0;
}

int rotateCompare(char *src, char *des)
{
	char * pc = src;
	char * p;
	while(*des != '\0')
	{
		while(*src++ != *des)	p=src;
		while(*src == *des) 
		{
			pc++;
			des++;
			if(*pc == '\0') pc = src;
			if(*des == '\0') return 1;
			if(*pc == *p) return 0;
		}

	}
	
} 