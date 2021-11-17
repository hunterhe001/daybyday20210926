#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Node {
	int Data;
	Node* Next;
};
//链表插入
void NodeInsert(Node* node, int N);
void PrintNode(Node* node);
//p33单向链表逆转
struct Node* Reverse(struct Node* L);
//hanoi汉诺塔递归p43
void hanoi(int n, int start, int goal, int temp);

