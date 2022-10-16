//描述
//判断某年是否是闰年。

//输入
//输入只有一行，包含一个整数a(0 < a < 3000)

//输出
//一行，如果公元a年是闰年输出Y，否则输出N

#include <iostream>

using namespace std;

int main () {
    
    int a;
    cin >> a;
    
    char leap_yr;
    
    int res_4 = a % 4;
    int res_100 = a % 100;
    int res_400 = a % 400;
    
    if (res_4 == 0) {
        if (res_100 == 0 && res_400 != 0) {
            leap_yr = 'N';
        } else {
            leap_yr = 'Y';
        }
    } else {
        leap_yr = 'N';
    }
    
    cout << leap_yr << endl;
    
    return 0;
}