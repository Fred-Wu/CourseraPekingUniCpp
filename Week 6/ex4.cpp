//描述
//输入6个正整数，且这6个正整数中至少存在一个奇数和一个偶数。
//设这6个正整数中最大的奇数为a，最小的偶数为b，求出 | a - b | 的值 

//输入
//输入为一行，6个正整数, 且6个正整数都小于100
//输入保证这6个数中至少存在一个奇数和一个偶数

//输出
//输出为一行，输出最大的奇数与最小的偶数之差的绝对值


#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    int N_in = 6;
    int unsigned number[N_in], odd[N_in - 1], even[N_in - 1];
    
    for (int i = 0; i < N_in; i++) {
        cin >> number[i];
    }
    
    
    int oddNumber = 0;
    int evenNumber = 0;
    
    // 奇数
    for (int i = 0; i < N_in; i++) {
        if (number[i] % 2 != 0) {
            odd[oddNumber] = number[i];
            oddNumber++;
        } else {
            // 偶数
            even[evenNumber] = number[i];
            evenNumber++;
        }

    }
    
    
    // 奇数排序 - 从大到小
    for (int i = 0; i < oddNumber; i++) {
        for (int j = 0; j < oddNumber - i - 1; j++) {
            if (odd[j + 1] > odd[j]) {
                int tmpOdd = odd[j + 1];
                odd[j + 1] = odd[j];
                odd[j] = tmpOdd;
            }
        }
    }
    
    
    // 偶数排序 - 从小到大
    for (int i = 0; i < evenNumber; i++) {
        for (int j = 0; j < evenNumber - i - 1; j++) {
            if (even[j + 1] < even[j]) {
                int tmpEven = even[j + 1];
                even[j + 1] = even[j];
                even[j] = tmpEven;
            }
        }
    }
    // absolute value between largest odd and smallest even. 
    int diff = odd[0] - even[0];
    int out = abs(diff);
    
    cout << out << endl;

    
    return 0;
}