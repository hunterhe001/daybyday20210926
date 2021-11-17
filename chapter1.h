#pragma once
#include <iostream>
#include <time.h>
//程序运行时间P5
void duration();
//最大子列和算法1，P14
int MaxSubseqSum1(int List[], int N);
//最大子列和算法2，P15
int MaxSubseqSum2(int List[], int N);
//最大子列和分治法
int MaxSubseqSum3(int List[], int N);
int DivideAndConquer(int List[], int left, int right);
//最大子列和，在线处理法
int MaxSubseqSum4(int List[], int N);                                                  
