#include "chapter1.h"
//int List[6] = { -2, 11, -4, 13, -5, -2 };
void duration()
{
    clock_t start, stop;
    long sum = 0;
    double duration = 0.0;
    start = clock();
    for (int i = 0; i < 1000000; i++)
    {
        sum += i;
    }
    stop = clock();
    duration = ((double)(stop - start)) / CLK_TCK;
    std::cout << duration << "    " << sum << std::endl;
}
int MaxSubseqSum1(int List[], int N)
{
    int maxvalue = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += List[k];
            }
            if (sum >= maxvalue)
                maxvalue = sum;
        }
    }
    return maxvalue;
}
int MaxSubseqSum2(int List[], int N)
{
    int maxvalue = 0;
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = i; j < N; j++)
        {
            sum += List[j];
            if (sum >= maxvalue)
                maxvalue = sum;
        }
    }
    return maxvalue;
}
int MaxSubseqSum3(int List[], int N)
{
    return DivideAndConquer(List, 0, N - 1);
}
int DivideAndConquer(int List[], int left, int right)
{
    int MaxLeftSum, MaxRightSum;
    int middle2leftmax, middle2rightmax;
    int middle2leftsum, middle2rightsum;
    int middle;
    middle = (right + left) / 2;
    if (middle == left)
        if (List[left] > 0)
            return List[left];
        else
            return 0;
    MaxLeftSum = DivideAndConquer(List, left, middle);
    MaxRightSum = DivideAndConquer(List, middle + 1, right);
    middle2leftsum = middle2leftmax = 0;
    for (int i = middle; i >= left; i--)
    {
        middle2leftsum += List[i];
        if (middle2leftsum > middle2leftmax)
            middle2leftmax = middle2leftsum;
    }

    middle2rightsum = middle2rightmax = 0;
    for (int i = middle + 1; i <= right; i++)
    {
        middle2rightsum += List[i];
        if (middle2rightsum > middle2rightmax)
            middle2rightmax = middle2rightsum;
    }

    if (middle2leftmax > middle2rightmax && middle2leftmax > (middle2leftmax + middle2rightmax))
        return middle2leftmax;
    else if (middle2rightmax > middle2leftmax && middle2rightmax > (middle2leftmax + middle2rightmax))
        return middle2rightmax;
    else
        return middle2leftmax + middle2rightmax;
}

int MaxSubseqSum4(int List[], int N)
{
    int maxvalue = 0;
    int sumvalue = 0;
    for (int i = 0; i < N; i++)
    {
        sumvalue += List[i];
        if (sumvalue > maxvalue)
            maxvalue = sumvalue;
        if (sumvalue < 0)
            sumvalue = 0;
    }
    return maxvalue;
}