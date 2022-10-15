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

int main() {
    
    int N, median_even[2], median_odd;
    
    while (cin >> N)
    {
        if (N == 0) break;
        else 
        {
            int res = N % 2;
            
            int data[N];
            for (int i = 0; i < N; i++)
                cin >> data[i];
            
            int num_gt = 0;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (i == j) continue;
                    else if(data[i] > data[j]) {
                        num_gt++; // count numbers less than the current value
                    }
                }
                if (res == 0) {
                    //if the seq is even, then median would be the middle two
                    //which are greater than N/2-1 numbers and N/2 numbers
                    if (num_gt == N/2 - 1)
                        median_even[0] = data[i];
                    if (num_gt == N/2)
                        median_even[1] = data[i];
                } else {
                    //if the seq is odd, then median would be the middle one
                    //which is greater than N/2 numbers
                    if (num_gt == N/2)
                        median_odd = data[i];
                }
                num_gt = 0;
            }

            if (res == 0) {
                cout << (median_even[0] + median_even[1])/2 << endl;
            } else 
                cout << median_odd << endl;
        }

    }   
    
    return 0;
}