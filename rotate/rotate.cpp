/*********************字符串移位包含的问题********************/
/*给定两个字符串s1和s2,要求判定s2是否能够被s1做循环移位得到的*/
/*字符串包含。例如，给定s1=AABCD和s2=CDAA，返回true；给定s1= */
/*ABCD和s2=ACBD,返回false。                                  */
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