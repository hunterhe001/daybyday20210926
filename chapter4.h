#pragma once
#include <iostream>
using namespace std;
typedef struct TreeNode* BinTree;
typedef BinTree Position;
struct TreeNode {
	int Data;
	BinTree Left;
	BinTree Right;
	int Height;
};
typedef struct AVLTreeNode* AVLTree;
struct AVLTreeNode{
	int Data;
	AVLTree Left;
	AVLTree Right;
	int Height;
};
void InOrderTraversal(BinTree T);
void FrontOrderTraversal(BinTree T);
void LastOrderTraversal(BinTree T);
void DeleteTreeNode(int Data, BinTree T);
int GetTreeHeight(AVLTree T);
AVLTree SingleL(AVLTree A);
AVLTree SingleR(AVLTree A);
AVLTree DoubleLR(AVLTree A);
AVLTree DoubleRL(AVLTree A);
AVLTree AVLInsert(int Data, AVLTree A);
//����
typedef struct HeapStruct* MaxHeap;
struct HeapStruct {
	int* Data;//��Ԫ�ص�����
	int Size;//��ǰԪ�ظ���
	int Capacity;//�ѵ��������
};
