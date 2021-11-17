#include "chapter4.h"
#include <stack>
void InOrderTraversal(BinTree T)
{
	if (T == NULL)
		return;
	InOrderTraversal(T->Left);
	cout << T->Data  << "	";
	InOrderTraversal(T ->Right);
}
void FrontOrderTraversal(BinTree T)
{
	if (T == NULL)
		return;
	cout << T->Data << "	";
	FrontOrderTraversal(T->Left);
	FrontOrderTraversal(T->Right);
}
void LastOrderTraversal(BinTree T)
{
	if (T == NULL)
		return;
	LastOrderTraversal(T->Left);
	LastOrderTraversal(T->Right);
	cout << T->Data << "	";
}
void DeleteTreeNode(int Data, BinTree T)
{
	BinTree TT = T;
	if (TT == NULL)
	{
		cout << "The Tree is empty !" << endl;
		return;
	}
	BinTree FT = new(TreeNode);
	int flag = 0;
	while (TT)
	{
		if (Data > TT->Data) {
			FT = TT;
			flag = 0;
			TT = TT->Right;
		}
		else if (Data < TT->Data) {
			FT = TT;
			flag = 1;
			TT = TT->Left;
		}
		else
			break;
	}
	if(TT == NULL)
		cout << "Can't find the Data !" << endl;
	else {
		if (TT->Left == NULL && TT->Right == NULL)
		{
			if (flag == 0)
			{
				FT->Right = NULL;
				delete(TT);
			}
			else {
				FT->Left = NULL;
				delete(TT);
			}
		}
		else if (TT->Left == NULL)
		{
			if (flag == 0)
			{
				FT->Right = TT->Right;
				delete(TT);
			}
			else
			{
				FT->Left = TT->Right;
				delete(TT);
			}
		}
		else if (TT->Right == NULL)
		{
			if (flag == 0)
			{
				FT->Right = TT->Left;
				delete(TT);
			}
			else
			{
				FT->Left = TT->Left;
				delete(TT);
			}
		}
		else
		{
			BinTree TTT = TT;
			TTT = TTT->Left;
			BinTree FFT = TTT;
			while (TTT->Right)
			{
				FFT = TTT;
				TTT = TTT->Right;
			}
			FFT->Right = TTT->Left;
			TTT->Left = TT->Left;
			TTT->Right = TT->Right;
			if (flag == 0)
			{
				FT->Right = TTT;
				delete(TT);
			}
			else {
				FT->Left = TTT;
				delete(TT);
			}
			
		}
			
	}
	return;
}
int GetTreeHeight(AVLTree T)
{
	if (!T)
	{
		return 0;
	}
	int LeftHeight = GetTreeHeight(T->Left);
	int RightHeight = GetTreeHeight(T->Right);
	int Height = LeftHeight > RightHeight ? LeftHeight : RightHeight;
	return Height + 1;
}
AVLTree SingleL(AVLTree A)
{
	AVLTree B = A->Left;
	A->Left = B->Right;
	B->Right = A;
	A->Height = (GetTreeHeight(A->Left) > GetTreeHeight(A->Right) ? GetTreeHeight(A->Left) : GetTreeHeight(A->Right)) + 1;
	B->Height = (GetTreeHeight(B->Left) > A->Height ? GetTreeHeight(B->Left) : A->Height) + 1;
	return B;
}
AVLTree SingleR(AVLTree A)
{
	AVLTree B = A->Right;
	A->Right = B->Left;
	B->Left = A;
	A->Height = (GetTreeHeight(A->Left) > GetTreeHeight(A->Right) ? GetTreeHeight(A->Left) : GetTreeHeight(A->Right)) + 1;
	B->Height = (GetTreeHeight(B->Left) > A->Height ? GetTreeHeight(B->Left) : A->Height) + 1;
	return B;
}
AVLTree DoubleLR(AVLTree A)
{
	A->Left = SingleR(A->Left);
	return SingleL(A);
}
AVLTree DoubleRL(AVLTree A)
{
	A->Right = SingleL(A->Right);
	return SingleR(A);
}
AVLTree AVLInsert(int Data, AVLTree A)
{
	if (A == NULL)
	{
		A = new(AVLTreeNode);
		A->Data = Data;
		A->Left = NULL;
		A->Right = NULL;
		A->Height = 0;
		return A;
	}
	if (Data < A->Data)
	{
		A->Left = AVLInsert(Data, A->Left);
		if (GetTreeHeight(A->Left) - GetTreeHeight(A->Right) == 2) {
			if (Data < A->Left->Data)
			{
				A = SingleL(A);
			}
			else
			{
				A = DoubleLR(A);
			}
		}
	}
	else
	{
		A->Right = AVLInsert(Data, A->Right);
		if (GetTreeHeight(A->Left) - GetTreeHeight(A->Right) == 2) {
			if (Data > A->Right->Data)
			{
				A = SingleR(A);
			}
			else
			{
				A = DoubleRL(A);
			}
		}
	}
	A->Height = GetTreeHeight(A);
	return A;
}