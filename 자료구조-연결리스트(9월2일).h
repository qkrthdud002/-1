#ifndef _D_LINKED_LIST_H
#define _D_LINKED_LIST_H
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int LData; //����Ʈ ������
typedef struct _n {
	LData data; //int data;
	struct _n* next;
}Node;
typedef struct _linked {
	Node* head; //head node
	Node* cur; //current node
	Node* before; //���� ��� ����Ŵ
	int numOfData;
	int (*comp)(LData d1, LData d2);
}LinkedList;

//����
typedef LinkedList List; //����Ʈ
void ListInit(List* plist); //�ʱ�ȭ
void LInsert(List* plist, LData data);
int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);

//����Ʈ�� Ư�� ������ ����
LData LRemove(List* plist);
int LCount(List* plist);
void SetSortRule(List* plist, \
	int(*comp)(LData d1, LData d2)); // \�� ������ ���ٷ� �ν�


#endif