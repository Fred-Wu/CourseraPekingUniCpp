#include <iostream>
using namespace std;

int main() {
    int k; //num of testing samples;
    cin >> k;
    int ans[k];
    for (int i = 0; i < k; i++) {
        int num, rem = 0;
        cin >> num;
        while (num > 0) {
            rem += num % 2;
            num /= 2;
        }
        ans[i] = rem;
    }
    
    for (int i = 0; i < k; i++)
        cout << ans[i] << endl;
    
    return 0;
}