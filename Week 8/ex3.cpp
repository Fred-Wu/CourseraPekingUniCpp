//描述
//TODO: 某程序员开始工作，年薪N万，他希望在中关村公馆买一套60平米的房子，现在价格是200万，假设房子价格以每年百分之K增长，并且该程序员未来年薪不变，且不吃不喝，不用交税，每年所得N万全都积攒起来，问第几年能够买下这套房子（第一年房价200万，收入N万）。程序员每年先拿工资，再尝试买房，然后房子才涨价。

//输入
//* 有多行，每行两个整数N（10 <= N <= 50）, K（1 <= K <= 20） 

//输出
//* 针对每组数据，如果在第20年或者之前就能买下这套房子，则输出一个整数M，表示最早需要在第M年能买下，否则输出Impossible，输出需要换行

#include <iostream>
using namespace std;

int main() {
    
    int N, K;
    cin >> N >> K;
    
    double pct_K = double(K) / 100.0;
    
    int n_year = 1;
    int current_saving = N;
    int current_price = 200;

    while (current_saving < current_price) {

        n_year++;
        current_saving = N * n_year;
        current_price = current_price * (1 + pct_K);

        if ((current_saving >= current_price) && n_year <= 20) {
            cout << n_year << endl;
            break;
        }

        if (n_year > 20) {
            cout << "Impossible" << endl;
            break;
        }
    }

    return 0;
}