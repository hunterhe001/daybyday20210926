#pragma once
#include <iostream>
using namespace std;
#define MAXSIZE 100
typedef struct {
	int Data[MAXSIZE];
	int Top;
}Stack;//��ջ�ṹ���Դ洢����
typedef struct {
	int Data;
	struct Linkstack* Next;
}Linkstack_u;
//pushѹջ
void Push(Stack* Ptrs, int Data);
//pop��ջ
int Pop(Stack* Ptrs);
