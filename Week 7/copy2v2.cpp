//描述
//输入n个分数并对他们求和，用约分之后的最简形式表示。

// 比如：
//q/p = x1 / y1 + x2 / y2 + ....+ xn / yn，
//q/p要求是归约之后的形式。
// 如：5/6已经是最简形式，3/6需要规约为1/2, 3/1需要规约成3，10/3就是最简形式。
//PS : 分子和分母都没有为0的情况，也没有出现负数的情况 

//输入

//第一行的输入n, 代表一共有几个分数需要求和
//接下来的n行是分数

//输出
//输出只有一行，即归约后的结果

#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int sumn = 0;
    int sumd = 1; //储存结果， sumn/sumd
    
    while (n--) {
        int num, deno;
        char slash;    // 专门用来吃掉/的
        cin >> num >> slash >> deno;
        
        // 先加分子
        sumn = sumn * deno + num * sumd;
          
        //对于第一个数的分母先约分
        int a = sumd, b = sumn, tmp;
        while (a != 0) {
            tmp = a; a = b % a; b = tmp;
        }
        int gcd = b;
        sumn /= gcd;
        sumd /= gcd;
        
        //对于第二个数的分母再约分
        int a2 = deno, b2 = sumn, tmp2;
        while (a2 != 0) {
            tmp2 = a2; a2 = b2 % a2; b2 = tmp2;
        }
        int gcd2 = b2;
        sumn /= gcd2;
        deno /= gcd2;
        
        //得出最后约分后的分母
        sumd = sumd * deno;
        
    }
   
    if (sumd > 1)
        cout << sumn << '/' << sumd << endl;
    else cout << sumn << endl;
    
    return 0;
}