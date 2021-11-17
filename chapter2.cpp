#include "chapter2.h"
void NodeInsert(Node* node, int N)
{
	//Node* temp = new Node;
	Node* insert = new Node;
	insert->Data = 55;
	int i = 0;
	while (i < N)
	{
		node = node->Next;
		if (node == NULL)
			std::cout << "Wrong N!" << std::endl;
		i++;
	}
	insert->Next = node->Next;
	node->Next = insert;

}
void PrintNode(Node* node)
{
	while (node->Next)
	{
		std::cout << node->Next->Data << "	";
		node = node->Next;
	}
}
struct Node* Reverse(struct Node* L)//p33单向链表的逆转
{
	struct Node *p, * q, * t;
	p = NULL; 
	q = L;
	while (q != NULL)
	{
		t = q->Next;
		q->Next = p;
		p = q;
		q = t;
	}
	return p;
}
void hanoi(int n, int start, int goal, int temp)
{
	if (n == 0)
		return;
	hanoi(n - 1, start, temp, goal);
	printf("Move disk %d from %d to %d !\n", n, start, goal);
	hanoi(n - 1, temp, goal, start);
}