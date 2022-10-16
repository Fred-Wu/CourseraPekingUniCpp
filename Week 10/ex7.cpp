//描述
//中位数定义：一组数据按从小到大的顺序依次排列，处在中间位置的一个数或最中间两个数据的平均值（如果这组数的个数为奇数，则中位数为位于中间位置的那个数；如果这组数的个数为偶数，则中位数是位于中间位置的两个数的平均值）.
//TODO: 给出一组无序整数，求出中位数，如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）

//输入
//该程序包含多组测试数据，每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1 <= N <= 15000.
//接着N行为N个数据的输入，N = 0 时结束输入.

//输出
//输出中位数，每一组测试数据输出一行

#include <iostream>
using namespace std;

int main()
{

    int N;
    int result[100] = {0};

    int cnt = 0;
    while (cin >> N)
    {

        if (N == 0)
            break;

        else
        {
            int data[N];
            int cnt_gt[N];

            int sum = 0;
            int num = 0;

            for (int i = 0; i < N; i++)
            {
                cin >> data[i];
                cnt_gt[i] = 0;
            }

            int num_gt = 0;

            int res = N % 2;

            for (int i = 0; i < N; i++)
            {
                for (int j = i; j < N; j++)
                {
                    if (i == j)
                        continue;
                    else if (data[i] >= data[j])
                        cnt_gt[i]++;
                    else
                        cnt_gt[j]++;
                }
            }

            if (res == 0)
            {
                for (int i = 0; i < N; i++)
                {
                    if (cnt_gt[i] == N / 2 || cnt_gt[i] == N / 2 - 1)
                    {
                        sum += data[i];
                        num++;
                    }
                }
            }
            else
            {
                for (int i = 0; i < N; i++)
                {
                    if (cnt_gt[i] == N / 2)
                    {
                        sum += data[i];
                        num++;
                    }
                }
            }
            result[cnt] = sum / num;
        }
        cnt++;
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}