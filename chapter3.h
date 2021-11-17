#pragma once
#include <iostream>
using namespace std;
#define MAXSIZE 100
typedef struct {
	int Data[MAXSIZE];
	int Top;
}Stack;//堆栈结构线性存储定义
typedef struct {
	int Data;
	struct Linkstack* Next;
}Linkstack_u;
//push压栈
void Push(Stack* Ptrs, int Data);
//pop出栈
int Pop(Stack* Ptrs);
