#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

typedef struct Node
{
	char value;
	struct Node *next;
}Node;

void DeleteRandomNode(Node * pCurrent);

int main()
{
	Node first,second,thrid,fourth;
/*Init*/
	first.value = 'A';
	first.next = &second;
	second.value = 'B';
	second.next = &thrid;
	thrid.value = 'C';
	thrid.next = &fourth;
	fourth.value = 'D';
	fourth.next = NULL;
	printf("%c->%c->%c->%c\n",first.value,second.value,thrid.value,fourth.value);
	DeleteRandomNode(&second);
	printf("%c->%c->%c\n",first.value,second.value,fourth.value);

	return 0;
}

void DeleteRandomNode(Node * pCurrent)
{
	assert(pCurrent != NULL);
	Node *pNext = pCurrent ->next;
	if(pNext != NULL)
	{
		pCurrent ->next = pNext ->next;
		pCurrent ->value = pNext ->value;
		delete pNext;
	}
}