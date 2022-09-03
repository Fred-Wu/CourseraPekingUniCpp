//描述
//从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，
//输出采用每行输出一个数的方式，不带其它符号。

//输入
//一个任意的三位整数

//输出
//一个任意的三位整数

#include <iostream>

using namespace std;


int main() {
    
    // example 123
    
    int n, ans[3];
    cin >> n;
    
    if (n < 0) {
        n = -n;
    }
    
    int div = 100;
    int remainder = n;

    for (int i = 0; i < 3; i++) {
        ans[i] = remainder / div;
        remainder %= div;
        div /= 10;
    }

    for (int i = 0; i < 3; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}