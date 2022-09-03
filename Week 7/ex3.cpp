//描述
//TODO: 用户输入N和K，然后接着输入N个正整数（无序的），程序在不对N个整数排序的情况下，找出第K大的数。注意，第K大的数意味着从大到小排在第K位的数。

//输入
//* N
//* K
//* a1 a2 a3 a4.....aN

//输出
//b


#include <iostream>
using namespace std;

int main() {
    
    int N, K;
    cin >> N >> K;
    
    int a[N], cnt[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i]; 
        cnt[i] = 0;  // initialise count to 0 for all input
    }
 
    // compare each value with the rest of values
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (a[i] >= a[j]) 
                cnt[i] += 1;
        }
        
        // Kth largest value has N-K+1 values smaller or equal to it
        if (cnt[i] == N - K + 1) {
            cout << a[i] << endl;
        }
    }
    
    return 0;
}