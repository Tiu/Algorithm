/*********************�ַ�����λ����������********************/
/*���������ַ���s1��s2,Ҫ���ж�s2�Ƿ��ܹ���s1��ѭ����λ�õ���*/
/*�ַ������������磬����s1=AABCD��s2=CDAA������true������s1= */
/*ABCD��s2=ACBD,����false��                                  */
/*************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define SPACE 1

int rotate(char *src, char *des);
int main()
{
	char src[] = "AABCD";
	char des[] = "DA";

	if(rotate(src,des) == TRUE)
	{
		printf("true\n");
	}else
	{
		printf("false\n");
	}

	return 0;
}

int rotate(char *src, char *des)
{
#if SPACE
	int len = strlen(src);

	char *p = (char *)malloc(len*2*sizeof(char)+1);
	for(int i =0; i < len ; i++)
	{
		p[i] = src[i];
	}

	for(int j = len; j < len*2; j++)
	{
		p[j] = src[j-len];
	}
	p[len*2] = '\0';
	printf("%s\n",p);

	if(strstr(p,des) == 0)
	{
		return FALSE;
	}
	return TRUE;

#else
	int len = strlen(src);
	for(int i = 0; i < len - 1; i++)
	{
		char tempchar = src[0];
		for(int j = 0;j < len - 1; j++)
			src[j] = src[j + 1];
		src[len-1] = tempchar;
		if(strstr(src,des) == 0)
		{
			return FALSE;
		}
	}
	return TRUE;

#endif
}
