#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Node {
	int Data;
	Node* Next;
};
//�������
void NodeInsert(Node* node, int N);
void PrintNode(Node* node);
//p33����������ת
struct Node* Reverse(struct Node* L);
//hanoi��ŵ���ݹ�p43
void hanoi(int n, int start, int goal, int temp);

