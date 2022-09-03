//描述
//TODO: 在一个长度为n(n < 1000) 的整数序列中，判断是否存在某两个元素之和为k。

//输入
//* 第一行输入序列的长度n和k，用空格分开。第二行输入序列中的n个整数，用空格分开。

//输出
//* 如果存在某两个元素的和为k，则输出yes，否则输出no。

#include <iostream>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int sumk = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && nums[i] + nums[j] == k) // cannot add to itself i != j
                sumk += 1;
        }
        if (sumk != 0) {
            cout << "yes" << endl;
            break; 
        }
    }
    
    if (sumk == 0) {
        cout << "no" << endl;
    }
    
    return 0;
}