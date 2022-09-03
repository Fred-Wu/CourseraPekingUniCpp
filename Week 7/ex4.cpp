//描述
//TODO: 从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。

//输入
//* 一个小于1000的正整数。

//输出
//* 输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数

#include <iostream>
using namespace std;


int main() {
    
    int amount;
    cin >> amount;
    
    int values[] = {100, 50, 20, 10, 5, 1};
    int cash;
    for (int i = 0; i < 6; i++) {
        
        cash = amount / values[i];
        amount = amount % values[i];
        cout << cash << endl;
    }

    return 0;
}