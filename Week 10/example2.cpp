//TODO: 输出100以内所有的素数。 

#include <iostream>
using namespace std;

int main() {
    
    int sum = 0, a[100] = {0};
    
    for (int i = 2; i < 100; i++) {
        sum = i;    // each number's multipler, 2*2 = 2+2, 2*3 = 2+2+2, 4*5 = 4+4+4+4+4
        while (sum < 100) {
            sum = sum + i;
            if (sum < 100) a[sum] = 1;
        }
    }
    for (int i = 2; i < 100; i++) {
        if (a[i] == 0) cout << i << " ";
    }
    
    return 0;
}