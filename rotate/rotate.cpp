/*********************字符串移位包含的问题********************/
/*给定两个字符串s1和s2,要求判定s2是否能够被s1做循环移位得到的*/
/*字符串包含。例如，给定s1=AABCD和s2=CDAA，返回true；给定s1= */
/*ABCD和s2=ACBD,返回false。                                  */
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
