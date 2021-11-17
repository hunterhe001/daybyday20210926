// daybyday20210925.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "chapter1.h" 
#include "chapter2.h"
#include "chapter4.h"
using namespace std;
int main()
{
    BinTree T0 = new(TreeNode);
    BinTree T1 = new(TreeNode);
    BinTree T2 = new(TreeNode);
    BinTree T3 = new(TreeNode);
    BinTree T4 = new(TreeNode);
    BinTree T5 = new(TreeNode);
    BinTree T6 = new(TreeNode);
    T0->Data = 18;
    T0->Left = T1;
    T0->Right = T2;
    T1->Data = 10;
    T2->Data = 20;
    T1->Left = T3;
    T1->Right = T4;
    T2->Left = NULL;
    T2->Right = T5;
    T3->Data = 7;
    T4->Data = 15;
    T3->Left = NULL;
    T3->Right = T6;
    T4->Left = NULL;
    T4->Right = NULL;
    T5->Left = NULL;
    T5->Right = NULL;
    T5->Data = 22;
    T6->Data = 9;
    T6->Left = NULL;
    T6->Right = NULL;
    DeleteTreeNode(20, T0);
    //cout << T0->Left->Data << endl;
    //cout << T0->Right->Data << endl;
    //cout << T0->Right->Left->Data << endl;
    //cout << T0->Right->Right->Data << endl;
    cout << GetTreeHeight(T0) << endl;









    /*
    Node* nodehead = new Node;
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;
    Node* node4 = new Node;
    Node* node5 = new Node;
    nodehead->Next = node1;
    node1->Data = 1;
    node1->Next = node2;
    node2->Data = 2;
    node2->Next = node3;
    node3->Data = 3;
    node3->Next = node4;
    node4->Data = 4;
    node4->Next = node5;
    node5->Data = 5;
    node5->Next = NULL;
    */
    //NodeInsert(nodehead, 3);
    //PrintNode(nodehead);
    //hanoi(3, 1, 3, 2);
    



    /*union key {
        int k;
        char ch[2];
    }u;
    u.k = 258;
    printf("%d, %d", u.ch[0], u.ch[1]);*/
    //cout << u.ch[0] << "    " << u.ch[1] << endl;
    
    //cout << MaxSubseqSum4(List, 6) << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建 新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
