#include "chapter3.h"
void Push(Stack* Ptrs, int Data)
{
	if (Ptrs->Top >= MAXSIZE - 1)
	{
		cout << "Stack Full !" << endl;
		return;
	}
	Ptrs->Data[++(Ptrs->Top)] = Data;
	return;	
}
int Pop(Stack* Ptrs)
{
	if (Ptrs->Top <= 0)
	{
		cout << "Stack Empty!" << endl;
		return -10000;
	}
	return Ptrs->Data[(Ptrs->Top)--];
}