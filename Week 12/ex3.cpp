//描述
//给定一组点(x, y)，求距离最远的两个点之间的距离。

//输入
//第一行是点数n（n大于等于2）
//接着每一行代表一个点，由两个浮点数x y组成。

//输出
//输出一行是最远两点之间的距离。
//使用cout << fixed << setprecision(4) << dis << endl; 输出距离值并精确到小数点后4位。
//fixed和setprecision是在<iomanip> 头文件里定义的格式控制操作符，需要 #include<iomanip>.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double coord[n][2];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> coord[i][j];
        }
        
    }
    
    double dist = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == j) continue;
            else {
                double dis = sqrt(pow(coord[i][0] - coord[j][0], 2) + pow(coord[i][1] - coord[j][1], 2));
                if (dis > dist) {
                    dist = dis;
                }
            }

        }
    }
    
    cout << fixed << setprecision(4) << dist << endl;
    
    return 0;
}
