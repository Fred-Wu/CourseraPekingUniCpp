// 在键盘上输入20个0-9之间的整数， 统计每个数在输入数列中出现的次数

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int num, count[10] = {0};
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        //for (int j = 0; j < 10; j++) {
        //    if (num == j) count[j]++;
        //}
        count[num]++; // simpler way
    }
    
    for (int i = 0; i < 10; i++) {
        if (count[i] != 0)
            cout << i << " has " << count[i] << " times input." << endl;
    }

  
    
    return 0;
}