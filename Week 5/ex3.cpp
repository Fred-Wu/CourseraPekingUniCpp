
#include <iostream>
using namespace std;

int main() {
    int k, num_one = 0, num_five = 0, num_ten = 0;       
    cin >> k;
    
    for (int i = 0; i < k; i++) {
        int num;
        cin >> num;
        if (num == 1)
            num_one++;
        else if (num == 5)
            num_five++;
        else if (num == 10)
            num_ten++;
    }
    cout << num_one  << "\n"
         << num_five << "\n"
         << num_ten  << endl;
    
    return 0;
}