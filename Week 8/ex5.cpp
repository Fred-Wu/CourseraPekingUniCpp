//TODO: 对一个整数n, 如果其各个位数的数字相加得到的数m能整除n, 则称n为自整除数.例如21, 21 % (2 + 1) == 0, 所以21是自整除数.现求出从10到n(n < 100) 之间的所有自整除数.

//输入
//* 有一行, 整数n, (10 <= n < 100) 

//输出
//* 有多行.按从小到大的顺序输出所有大于等于10, 小于等于n的自整除数, 每行一个自整除数.

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int num = 10; num <= n; num++) {
        int tens_digit = num / 10;
        int ones_digit = num % 10;
        
        int remainder = num % (tens_digit + ones_digit);
        
        if (remainder == 0)
            cout << num << endl;
    }
    
    return 0;
}