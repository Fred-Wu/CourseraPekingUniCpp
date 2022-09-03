//奇数求和
#include <iostream>

using namespace std;

int main() {
    //define int m and n
    int m, n, result = 0;
    cin >> m  >> n;
    
    while (m <= n && n <= 300) {
       if (m % 2 == 1) 
            result += m;
       m++;
    }
    
    cout << result << endl;
    
    return 0;
}